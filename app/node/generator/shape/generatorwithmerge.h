/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2021 Olive Team

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

#ifndef GENERATORWITHMERGE_H
#define GENERATORWITHMERGE_H

#include "node/node.h"

namespace olive {

class GeneratorWithMerge : public Node
{
  Q_OBJECT
public:
  GeneratorWithMerge();

  NODE_DEFAULT_DESTRUCTOR(GeneratorWithMerge)

  virtual void Retranslate() override;

  virtual ShaderCode GetShaderCode(const QString &shader_id) const override;

  static const QString kBaseInput;

protected:
  void PushMergableJob(const NodeValueRow &value, const QVariant &job, NodeValueTable *table) const;

};

}

#endif // GENERATORWITHMERGE_H