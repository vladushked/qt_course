#include "mapform.h"


MapForm::MapForm(QWidget *parent) :
    QWidget(parent) {
    setupUi(this);

    hlay = new QHBoxLayout();

    splineSeries = new QSplineSeries ;

    splineSeries->append(0, 6);
    splineSeries->append(2, 4);

    chart = new QChart();//создать объект QChart
    chart->addSeries(splineSeries); //добавить данные на график

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    xAxis= new QValueAxis();
    yAxis= new QValueAxis();
    //установка максимального и минимального значения по оси (например +/- 100)
    xAxis->setRange(-100,100);
    //установка количества отметок (штрихов) на оси (по умолчанию =5)
    xAxis->setTickCount(11);
    //так устанавливается надпись для оси графика:
    xAxis->setTitleText("X, м");
    yAxis->setRange(-100,100);
    yAxis->setTickCount(11);
    yAxis->setTitleText("Y, м");

    chartView->chart()->setAxisX(xAxis, splineSeries);
    chartView->chart()->setAxisY(yAxis, splineSeries);


    hlay->addWidget(chartView);
    setLayout(hlay);
}

MapForm::~MapForm() {
    delete hlay;
}

void MapForm::setXY(float X, float Y) {


}

void MapForm::moveRight(){
    chart->scroll(10,0);
}

void MapForm::moveLeft(){

}
void MapForm::scalePlus(){
    chart->zoomIn();
}

void MapForm::scaleMinus(){

}
void MapForm::moveUp(){

}

void MapForm::moveDown(){
    chartView->chart()->scroll(0,-10);
}
void MapForm::clearChart(){

}
void MapForm::scaleReset(){
    chart->zoomReset();
}
