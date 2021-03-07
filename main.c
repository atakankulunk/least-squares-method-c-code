#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    float sumx = 0, sumx2 = 0, sumy = 0, sumyx = 0, b, a;

    float x[] = {6.61168385, 6.58090448, -33.2279854, 6.58139706, 6.4718194, 6.54501581, 6.57977724, 6.53904295, 6.54830837, 6.57730341, 6.53028727, 6.54691696, 6.53714609, 6.57526016, 6.53425026, 6.55307817, 6.55764771, 6.53551102};
    float y[] = {0.057166632, 0.056908205, 0.058522295, 0.05694877, 0.057575475, 0.056082185, 0.057246588, 0.056857009, 0.057770331, 0.05621, 0.057315417, 0.057206873, 0.058031075, 0.056313444, 0.057242096, 0.057296246, 0.058000002, 0.056261636};
    int n = (sizeof (x) / sizeof (x[0]));

    int i;
    for (i = 0; i < n; i++) {
        sumx = sumx + x[i];
        sumx2 = sumx2 + x[i] * x[i];
        sumy = sumy + y[i];
        sumyx = sumyx + y[i] * x[i];
    }

    // y=ax+b
    b = (sumx2 * sumy - sumyx * sumx) / (n * sumx2 - sumx * sumx);
    a = (n * sumyx - sumx * sumy) / (n * sumx2 - sumx * sumx);

    printf("\ndenklem: y = %fx + %f", a, b);

    return 1;
}

