#ifndef POINTSTABWIDGET_H
#define POINTSTABWIDGET_H

#include <QWidget>

namespace Ui {
class PointsTabWidget;
}

class PointsTabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PointsTabWidget(QWidget *parent = 0);
    ~PointsTabWidget();

private:
    Ui::PointsTabWidget *ui;
};

#endif // POINTSTABWIDGET_H
