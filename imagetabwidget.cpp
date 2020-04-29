#include "imagetabwidget.h"
#include "ui_imagetabwidget.h"

ImageTabWidget::ImageTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImageTabWidget)
{
    ui->setupUi(this);
}

ImageTabWidget::~ImageTabWidget()
{
    delete ui;
}
