/*
 *  Part of rvglue source code,
 *  Copyright (C) 2000 Alexander Kroeller (alilein@gmx.de)
 *  Copyright (C) 2000 Christer Sundin (ces) (christer@sundin.nu)
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
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#ifndef __TEXTURE_FLOOR_MODIFIER_H
#define __TEXTURE_FLOOR_MODIFIER_H

#include <mesh.h>
#include <rvtypes.h>

#include "meshmod.h"
#include "parser.h"
#include "texdef.h"

class MeshMod_TexFloor : public MeshMod
{
public:

	MeshMod_TexFloor();

	virtual void dump(const char *pref);

	virtual bool bad(void);

	virtual bool parse(Parser &);

	virtual bool apply(Mesh *);

private:

	bool parsed;

	TextureDefinition texdef;
};

#endif
