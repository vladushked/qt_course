#ifndef SU_ROV_H
#define SU_ROV_H

#include "KX_pult_src/kx_protocol.h"
#include "KX_pult_src/qkx_coeffs.h"

extern double X[2000][2];
extern QVector<double> K;

class SU_ROV
{
public:
    SU_ROV();

private:
    Qkx_coeffs *K_Protocol;
    x_protocol *X_Protocol;
};

#endif // SU_ROV_H
