#ifndef SU_ROV_H
#define SU_ROV_H

#include <QObject>
#include "KX_pult_src/kx_protocol.h"
#include "KX_pult_src/qkx_coeffs.h"
#include "rov_model.h"


extern double X[2000][2];
extern QVector<double> K;

class SU_ROV : public QObject
{
    Q_OBJECT

public:
    explicit SU_ROV(QObject *parent = nullptr);

    //метод, который ограничивает значение input по величине max
    float saturation(float input, float max);
    int sign(float input){
        return (input>=0) ? 1 : -1;
    }

public slots:
    void tick();

private:
    Qkx_coeffs * K_Protocol;
    x_protocol * X_Protocol;

    ROV_Model *model;

    QTimer timer;
    float timer_period; //период таймера

    void getDataFromModel();
    void yawControlChannel();
    void BFS_DRK(double Upsi, double Uteta, double Ugamma, double Ux);
};

#endif // SU_ROV_H
