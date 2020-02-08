#define MAXFNAME 13
#define CHNULL ((char *) 0)
#define MAX(x,  y)   (((x) > (y)) ? (x) : (y))

char program [MAXFNAME];

void get_prog_name (char *path)
{
        char *p, *q;

        p = (char *) MAX(strrchr(path, '\\'), strrchr(path, '/'));
        if (p != CHNULL) p ++;
        else p = path;
        strncpy (program, p, MAXFNAME - 1);
        q = (char *) strchr (program, '.');
        if (q != CHNULL) *q = '\0';
        return;
}
