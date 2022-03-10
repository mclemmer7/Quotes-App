#ifndef SEARCHDISPLAY_H
#define SEARCHDISPLAY_H

#include <QDialog>

namespace Ui {
class SearchDisplay;
}

class SearchDisplay : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDisplay(QWidget *parent = nullptr);
    ~SearchDisplay();

private:
    Ui::SearchDisplay *ui;
};

#endif // SEARCHDISPLAY_H
