#ifndef RECONTABWIDGET_H
#define RECONTABWIDGET_H

#include <QWidget>

namespace Ui {
class ReconTabWidget;
}

class ReconTabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ReconTabWidget(QWidget *parent = 0);
    ~ReconTabWidget();

private:
    Ui::ReconTabWidget *ui;
};

#endif // RECONTABWIDGET_H
