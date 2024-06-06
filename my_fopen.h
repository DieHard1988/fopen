#ifndef _MY_FOPEN_
#define _MY_FOPEN_

#define PERMS 0666

#define my_NULL                 0
#define my_EOF                  (-1)
#define my_BUFIZ                (1024)
#define my_OPEN_MAX             20

typedef struct _iobuf
{
        int cnt;
        char *ptr;
        char *base;
        int flag;
        int fd;
}FILE;
extern FILE _myiob[my_OPEN_MAX];

#define stdin (&_myiob[0])
#define stdout (&_myiob[1])
#define stderr (&_myiob[2])

enum _flags
{
        _READ = 01,
        _WRITE = 02,
        _UNBUF = 04,
        _EOF = 010,
        _ERR = 020
};

extern FILE *fopen(char *name, char *mode);

#endif
