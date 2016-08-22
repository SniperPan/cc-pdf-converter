/**
	@file
	@brief 
*/

/*
 * CC PDF Converter: Windows PDF Printer with Creative Commons license support
 * Excel to PDF Converter: Excel PDF printing addin, keeping hyperlinks AND Creative Commons license support
 * Copyright (C) 2007-2010 Guy Hachlili <hguy@cogniview.com>, Cogniview LTD.
 * 
 * This file is part of CC PDF Converter / Excel to PDF Converter
 * 
 * CC PDF Converter and Excel to PDF Converter are free software;
 * you can redistribute them and/or modify them under the terms of the 
 * GNU General Public License as published by the Free Software Foundation;
 * either version 2 of the License, or (at your option) any later version.
 * 
 * CC PDF Converter and Excel to PDF Converter are is distributed in the hope 
 * that they will be useful, but WITHOUT ANY WARRANTY; without even the implied 
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. * 
 */

#ifndef _CCLICENSEWIZARD_H_
#define _CCLICENSEWIZARD_H_

struct LicenseInfo;

/**
    @brief Class handling the license selection wizard
*/
class CCLicenseWizard
{
public:
	// Ctor
	/// Constructor
	CCLicenseWizard();

public:
	// Methods
	/// This function runs the wizard, filling the license information with the user selected license
	BOOL		DoModal(HWND hParent, struct IPrintOemDriverUI* pHelper, LicenseInfo* pInfo);
};

#endif   //#define _CCLICENSEWIZARD_H_
