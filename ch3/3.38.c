
#define N 16
typedef int fix_matricx[N][N];

struct rect {
  long llx;
  long lly;
  unsigned long width;
  unsigned long height;
  unsigned color;
};

long area(struct rect *rp) {
    return rp -> width * rp -> height;
}
