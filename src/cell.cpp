#include "cell.h"

#include <QPainter>
#include <QBrush>

Cell::Cell(QWidget* parent,
           int initialWidth,
           int initialHeight,
           QColor initialOutlineColor,
           QColor initialBackgroundColor)
    : QWidget(parent)
    , width(initialWidth)
    , height(initialHeight)
    , outlineColor(initialOutlineColor)
    , backgroundColor(initialBackgroundColor)
{
    this->resize(width, height);
}

int Cell::getWidth() const
{
    return width;
}

int Cell::getHeight() const
{
    return height;
}

void Cell::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event)

    QPainter painter(this);
    painter.setPen(QPen(outlineColor, 1, Qt::SolidLine, Qt::FlatCap));
    painter.setBrush(QBrush(backgroundColor, Qt::SolidPattern));
    painter.drawRect(1, 1, Cell::width, Cell::width);
    }

