#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QEvent>
#include "ui_compassform.h"
#include "picframe.h"
#include "compasswidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class CompassForm : public QWidget
{
    Q_OBJECT

public:
    CompassForm(QWidget *parent = nullptr);
    ~CompassForm();

private:
    Ui::CompassForm *ui;
    bool closeFlag;
};
#endif // WIDGET_H
