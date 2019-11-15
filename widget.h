#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "asioclient.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_getBtn_clicked();
    void on_success(const QString& msg);

private:
    Ui::Widget *ui;
    AsioClient * client;
};
#endif // WIDGET_H
