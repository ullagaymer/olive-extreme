/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2022 Olive Team

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

#ifndef SAMPLERATECOMBOBOX_H
#define SAMPLERATECOMBOBOX_H

#include <olive/core/core.h>
#include <QComboBox>

#include "ui/humanstrings.h"

namespace olive {

using namespace core;

class SampleRateComboBox : public QComboBox
{
  Q_OBJECT
public:
  SampleRateComboBox(QWidget* parent = nullptr) :
    QComboBox(parent)
  { //add the predefined sample rates from AudioParams
    foreach (int sr, AudioParams::kSupportedSampleRates) {
      this->addItem(HumanStrings::SampleRateToString(sr), sr);
    }
    //add "custom" option at the end
    this->addItem(tr("Custom"), -1); // -1 will indicate custom selection
  }

  int GetSampleRate() const
  {
    return this->currentData().toInt();
  }

  void SetSampleRate(int rate)
  {
    for (int i=0; i<this->count(); i++) {
      if (this->itemData(i).toInt() == rate) {
        this->setCurrentIndex(i);
        break;
      }
    }
  }
 public slots:
     void OnCustomSampleRateSelected()
     { 
         if (GetSampleRate() == -1) { // Check if custom is selected
            bool ok;
            int customRate = QInputDialog::getInt(this, tr("Custom Sample Rate"), 
               tr("Enter sample rate in Hz:"), 0, 0, 768000, 1, &ok); // Max 768000 Hz
            if (ok) {
           SetSampleRate(customRate);
            }
         }
     }
};

}

#endif // SAMPLERATECOMBOBOX_H
