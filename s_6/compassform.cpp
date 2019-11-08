#include "compassform.h"
#include "ui_compassform.h"

CompassForm::CompassForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CompassForm)
{
    ui->setupUi(this);
    closeFlag = 0;
    connect(ui->sldYawSet, SIGNAL(valueChanged(int)),ui->picFrame, SLOT(setYaw(int)));
    connect(ui->sldYawCurrent , SIGNAL(valueChanged(int)),ui->picFrame, SLOT(setYawDesirable(int)));
    //connect(ui->rbCloseMode, SIGNAL(toggled(bool)), this, )
}

CompassForm::~CompassForm()
{
    delete ui;
}

