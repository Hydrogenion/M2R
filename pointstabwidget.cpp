#include "pointstabwidget.h"
#include "ui_pointstabwidget.h"

PointsTabWidget::PointsTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PointsTabWidget)
{
    ui->setupUi(this);
}

PointsTabWidget::~PointsTabWidget()
{
    delete ui;
}
