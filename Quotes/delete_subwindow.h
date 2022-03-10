#ifndef DELETE_SUBWINDOW_H
#define DELETE_SUBWINDOW_H

#include <QDialog>

namespace Ui {
class Delete_Subwindow;
}

class Delete_Subwindow : public QDialog
{
    Q_OBJECT

public:
    explicit Delete_Subwindow(QWidget *parent = nullptr);
    ~Delete_Subwindow();

private:
    Ui::Delete_Subwindow *ui;
};

#endif // DELETE_SUBWINDOW_H
