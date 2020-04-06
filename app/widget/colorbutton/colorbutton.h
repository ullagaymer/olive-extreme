/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2019 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#ifndef COLORBUTTON_H
#define COLORBUTTON_H

#include <QPushButton>

#include "render/color.h"
#include "render/colormanager.h"

OLIVE_NAMESPACE_ENTER

class ColorButton : public QPushButton
{
  Q_OBJECT
public:
  ColorButton(ColorManager* color_manager, QWidget* parent = nullptr);

  const Color& GetColor() const;

public slots:
  void SetColor(const Color& c);

signals:
  void ColorChanged(const Color& c);

private slots:
  void ShowColorDialog();

private:
  void UpdateColor();

  ColorManager* color_manager_;

  Color color_;

  QString cm_input_;

  ColorProcessorPtr color_processor_;

};

OLIVE_NAMESPACE_EXIT

#endif // COLORBUTTON_H
