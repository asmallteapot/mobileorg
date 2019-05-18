//
//  EditEntity.h
//  MobileOrg
//
//  Created by Richard Moreland on 10/3/09.
//  Copyright 2009 Richard Moreland.
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//

@import Foundation;

@class Node;

@interface EditEntity : NSObject {
    NSString *editAction;
    NSString *oldValue;
    NSString *updatedValue;
    NSString *heading;
    NSString *noteId;
    NSDate *createdAt;
    Node *node;
}

@property (nonatomic, copy) NSString *editAction;
@property (nonatomic, copy) NSString *oldValue;
@property (nonatomic, copy) NSString *updatedValue;
@property (nonatomic, copy) NSString *heading;
@property (nonatomic, copy) NSString *noteId;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, retain) Node *node;

@end
