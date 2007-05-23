/*
 *  Copyright (c) 2004 Boudewijn Rempt <boud@valdyas.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */
#ifndef KIS_DLG_IMAGE_PROPERTIES_H_
#define KIS_DLG_IMAGE_PROPERTIES_H_

#include <kdialog.h>

#include <kis_types.h>
#include "ui_wdgimageproperties.h"

class KoID;
class KoColorSpace;
class KoColorProfile;

class WdgImageProperties : public QWidget, public Ui::WdgImageProperties
{
    Q_OBJECT

    public:
        WdgImageProperties(QWidget *parent) : QWidget(parent) { setupUi(this); }
};

class KisDlgImageProperties : public KDialog {
    typedef KDialog super;
    Q_OBJECT

public:
    KisDlgImageProperties(KisImageSP image,
                          QWidget *parent = 0,
                          const char *name = 0);
    virtual ~KisDlgImageProperties();

    KoColorSpace * colorSpace();
    KoColorProfile * profile();
    
private slots:

    void fillCmbProfiles(const KoID &);

private:

    WdgImageProperties * m_page;
    KisImageSP m_image;
};



#endif // KIS_DLG_IMAGE_PROPERTIES_H_

