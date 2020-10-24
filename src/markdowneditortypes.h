/***********************************************************************
 *
 * Copyright (C) 2014-2020 wereturtle
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 ***********************************************************************/

#ifndef MARKDOWNEDITORTYPES_H
#define MARKDOWNEDITORTYPES_H

namespace ghostwriter
{
enum FocusMode {
    FocusModeFirst,
    FocusModeDisabled = FocusModeFirst,
    FocusModeSentence,
    FocusModeCurrentLine,
    FocusModeThreeLines,
    FocusModeParagraph,
    FocusModeTypewriter,
    FocusModeLast = FocusModeTypewriter
};

enum EditorWidth {
    EditorWidthFirst,
    EditorWidthNarrow = EditorWidthFirst,
    EditorWidthMedium,
    EditorWidthWide,
    EditorWidthFull,
    EditorWidthLast = EditorWidthFull
};

enum InterfaceStyle {
    InterfaceStyleFirst,
    InterfaceStyleRounded = InterfaceStyleFirst,
    InterfaceStyleSquare,
    InterfaceStyleLast = InterfaceStyleSquare,
};
} // namespace ghostwriter

#endif // MARKDOWNEDITORTYPES_H