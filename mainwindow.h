#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushbutton_1_clicked();

    void on_pushbutton_2_clicked();

    void on_pushbutton_3_clicked();

    void on_pushbutton_4_clicked();

    void on_pushbutton_5_clicked();

    void on_pushbutton_6_clicked();

    void on_pushbutton_7_clicked();

    void on_pushbutton_8_clicked();

    void on_pushbutton_9_clicked();

    void on_pushbutton_0_clicked();

    void on_pushButton_CLEAR_clicked();

    void on_pushButton_DECIMAL_clicked();

    void on_pushButtonPLUS_clicked();

    void on_pushButtonMINUS_clicked();

    void on_pushbuttonMULTIPLY_clicked();

    void on_pushButtonDIVIDE_clicked();

    void on_pushButton_EQUALS_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
