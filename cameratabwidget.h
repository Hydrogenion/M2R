#ifndef CAMERATABWIDGET_H
#define CAMERATABWIDGET_H

#include <QWidget>

namespace Ui {
class CameraTabWidget;
}

class CameraTabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CameraTabWidget(QWidget *parent = 0);
    ~CameraTabWidget();

private:
    Ui::CameraTabWidget *ui;
};

#endif // CAMERATABWIDGET_H
