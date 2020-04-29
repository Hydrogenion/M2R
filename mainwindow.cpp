#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initMainWindow();
    initTabWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initMainWindow()
{
    // init menubar toolbar statusbar
    menuBar = new QMenuBar(this);
    menuBar->setNativeMenuBar(false);
    setMenuBar(menuBar);
    toolBar = new QToolBar(this);
    addToolBar(toolBar);
    statusBar = new QStatusBar(this);
    setStatusBar(statusBar);
//    tabWidget = new QTabWidget(this);

    // init action for about qt
    QAction *aboutAction = new QAction(tr("AboutQt"), this);
    aboutAction->setStatusTip(tr("About Qt"));
    aboutAction->setIcon(QIcon(":/images/Qt.png"));

    QMenu *aboutMenu = menuBar->addMenu(tr("About"));
    aboutMenu->addAction(aboutAction);

    toolBar->addAction(aboutAction);
    connect(aboutAction, SIGNAL(triggered(bool)), this, SLOT(aboutQt()));

    // init four tab widget
    cameraTabWidget = new CameraTabWidget();
    imgTabWidget = new ImageTabWidget();
    reconTabWidget = new ReconTabWidget();
    pointsTabWidget = new PointsTabWidget();
}


void MainWindow::initTabWidget()
{
    ui->tabWidget->addTab(cameraTabWidget,"图像采集");
    ui->tabWidget->addTab(imgTabWidget,"图像处理");
    ui->tabWidget->addTab(reconTabWidget,"点云重建");
    ui->tabWidget->addTab(pointsTabWidget,"点云处理");

}

void MainWindow::aboutQt()
{
    qApp->aboutQt();
}


