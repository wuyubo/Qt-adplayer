#ifndef ROLLMASSEGE_H
#define ROLLMASSEGE_H

#include <QLabel>
#include <QEvent>
#include <QTimer>
#include <QRect>
#include <QPainter>
#include <QFont>

class RollMassege : public QLabel
{
    Q_OBJECT
public:
    explicit RollMassege(QWidget *parent = 0);
    explicit RollMassege(QLabel *_label, QWidget *parent = 0);

    void paintEvent(QPaintEvent *event);
signals:

public slots:
    void updateMsg();
private:
    QString txt;
    QRect rect;
    int offset;
    QTimer *timer;
};

#endif // ROLLMASSEGE_H
