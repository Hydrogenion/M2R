#include "recontabwidget.h"
#include "ui_recontabwidget.h"

ReconTabWidget::ReconTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReconTabWidget)
{
    ui->setupUi(this);
}

ReconTabWidget::~ReconTabWidget()
{
    delete ui;
}
