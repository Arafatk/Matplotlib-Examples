/*
   cc a.c -I/usr/local/gr/include -L/usr/local/gr/lib -lGR -lm -Wl,-rpath,/usr/local/gr/lib
 */

#include <stdlib.h>
#include <math.h>

#include "gr.h"
#include "gks.h"

int main(void)
{
        double x[] = {0, 0.2, 0.4, 0.6, 0.8, 1.0};
        double y[] = {0.3, 0.5, 0.4, 0.2, 0.6, 0.7};
        char *filename = "output.png";
        gr_beginprint(filename);
        gr_polyline(6, x, y);
        gr_axes(gr_tick(0, 1), gr_tick(0, 1), 0, 0, 1, 1, -0.01);
// Press any key to exit
        gr_endprint();
        int k;
        scanf("%d\n",&k );
}
