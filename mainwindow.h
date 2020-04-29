#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QToolBar>
#include "cameratabwidget.h"
#include "imagetabwidget.h"
#include "recontabwidget.h"
#include "pointstabwidget.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void initMainWindow();
    void initTabWidget();

    ~MainWindow();

public slots:
    void aboutQt();

private:
    Ui::MainWindow *ui;
    QMenuBar *menuBar;
    QToolBar *toolBar;
    QStatusBar *statusBar;
    QTabWidget *tabWidget;
    CameraTabWidget *cameraTabWidget;
    ImageTabWidget *imgTabWidget;
    ReconTabWidget *reconTabWidget;
    PointsTabWidget *pointsTabWidget;
};

#endif // MAINWINDOW_H
