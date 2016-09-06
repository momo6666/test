//
//  Dog.h
//  RealmTest
//
//  Created by Sharejoy on 16/7/28.
//  Copyright © 2016年 sharejoy. All rights reserved.
//

#import <Realm/Realm.h>

@interface Dog : RLMObject

@end

// This protocol enables typed collections. i.e.:
// RLMArray<Dog>
RLM_ARRAY_TYPE(Dog)
