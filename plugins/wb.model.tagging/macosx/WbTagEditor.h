/*
 * Copyright (c) 2009, 2018, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0,
 * as published by the Free Software Foundation.
 *
 * This program is designed to work with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation.  The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have either included with
 * the program or referenced in the documentation.
 * This program is distributed in the hope that it will be useful,  but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 * the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA 
 */

#import <Cocoa/Cocoa.h>
#import "WBPluginEditorBase.h"

#include "wb_tag_editor.h"

@class GRTListDataSource;

@interface WbTagEditor : WBPluginEditorBase {
  IBOutlet NSTabView *editorTabView;

  IBOutlet NSPopUpButton *categoryPop;
  IBOutlet NSTableView *tagTable;

  IBOutlet NSTextField *tagNameText;
  IBOutlet NSTextField *tagLabelText;
  IBOutlet NSColorWell *tagColor;
  IBOutlet NSTextView *tagComment;

  IBOutlet NSTableView *objectTable;
  IBOutlet NSTextView *objectText;

  IBOutlet NSButton *deleteTagButton;

  NSMutableArray *mTagArray;

  TagEditorBE *mBackEnd;
}

- (IBAction)addTag:(id)sender;
- (IBAction)deleteTag:(id)sender;

@end
