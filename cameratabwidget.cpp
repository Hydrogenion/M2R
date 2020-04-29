#include "cameratabwidget.h"
#include "ui_cameratabwidget.h"

CameraTabWidget::CameraTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CameraTabWidget)
{
    ui->setupUi(this);
}

CameraTabWidget::~CameraTabWidget()
{
    delete ui;
}
