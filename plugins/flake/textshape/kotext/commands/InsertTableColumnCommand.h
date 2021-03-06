/*
 This file is part of the KDE project
 * Copyright (C) 2009 Pierre Stirnweiss <pstirnweiss@googlemail.com>
 * Copyright (C) 2010-2011 C. Boemann <cbo@boemann.dk>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.*/

#ifndef INSERTTABLECOLUMNCOMMAND_H
#define INSERTTABLECOLUMNCOMMAND_H

#include <kundo2command.h>
#include <KoTableColumnStyle.h>

class KoTextEditor;
class QTextTable;

class InsertTableColumnCommand : public KUndo2Command
{
public:

    InsertTableColumnCommand(KoTextEditor *te, QTextTable *t, bool right, KUndo2Command *parent = 0);

    void undo() override;
    void redo() override;

private:
    bool m_first;
    KoTextEditor *m_textEditor;
    QTextTable *m_table;
    int m_column;
    bool m_right;
    KoTableColumnStyle m_style;
};

#endif // INSERTTABLECOLUMNCOMMAND_H
