#include "su_rov.h"

SU_ROV::SU_ROV()
{
    K_Protocol = new Qkx_coeffs("protocols.conf", "ki");
    X_Protocol = new x_protocol("protocols.conf", "xi", X);
}
