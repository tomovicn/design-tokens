
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Wed, 07 Dec 2022 11:11:42 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
#000000f0,
#ffffff,
#000000b5,
#ffffffd1,
#0000008a,
#ffffffb3,
#0000004d,
#ffffff75,
#d92008,
#f8503a,
#b85900,
#ff7d04,
#426a11,
#83d421,
#017c7e,
#014f51,
#02b3b6,
#AEE7E8,
#000000f0,
#ffffff,
#017c7e,
#02b3b6,
#d92008,
#f8503a,
#ff7d04,
#ff9633,
#639f19,
#639f19,
#00000008,
#ffffff21,
#00000014,
#ffffff21,
#00000014,
#ffffff4a,
#00000030,
#ffffff4a,
#0000008a,
#ffffffb3,
#d92008,
#f8503a,
#017c7e,
#014f51,
#02b3b6,
#011e1f,
#017c7e,
#83d421,
#ffb570,
#ff7d04,
#d92008,
#9d1706,
#d0d0ce,
#ffffff,
#F6F6F6,
#00000014,
#ffffff36,
#011e1f,
#00000000,
#00000008,
#ffffff21,
#00000008,
#ffffff21,
#0000008a,
#fff7f5,
#fff5eb,
#f6fcee,
#F7FDFD,
#F6F6F6,
#ffffff,
#F6F6F6,
#011e1f,
#014f51,
#011e1f,
#017c7e,
#014f51,
#ffffff,
#00000008,
#ffffffd1,
#00000000,
#00000008,
#ffffff21,
#00000000,
#00000008,
#ffffff21
    ];
  });

  return colorArray;
}

@end
