/*
 * Copyright (C) 2016 ~ 2018 Deepin Technology Co., Ltd.
 *               2016 ~ 2018 dragondjf
 *
 * Author:     dragondjf<dingjiangfeng@deepin.com>
 *
 * Maintainer: dragondjf<dingjiangfeng@deepin.com>
 *             zccrs<zhangjide@deepin.com>
 *             Tangtong<tangtong@deepin.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "dhorizseparator.h"
#include <QPainter>

DHorizSeparator::DHorizSeparator(QWidget *parent) :
    QWidget(parent)
{
    setFixedHeight(2);
}

void DHorizSeparator::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    double w = width();
    double h = height();
    QPen pen(Qt::lightGray);
    pen.setWidth(1);
    painter.setPen(pen);
    painter.drawLine(2, h/2, w-2, h/2);
    painter.end();
    QWidget::paintEvent(event);
}
