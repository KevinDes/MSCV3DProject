#ifndef FINALRESULT_H
#define FINALRESULT_H

#include <QWidget>

namespace Ui {
class finalresult;
}

class finalresult : public QWidget
{
    Q_OBJECT
public:
    explicit finalresult(QWidget *parent = 0);
    ~finalresult();

private:
    Ui::finalresult *ui;

signals:

public slots:

};

#endif // FINALRESULT_H
