#ifndef IMAGETABWIDGET_H
#define IMAGETABWIDGET_H

#include <QWidget>

namespace Ui {
class ImageTabWidget;
}

class ImageTabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageTabWidget(QWidget *parent = 0);
    ~ImageTabWidget();

private:
    Ui::ImageTabWidget *ui;
};

#endif // IMAGETABWIDGET_H
