
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 07 Dec 2022 11:28:48 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorTextPrimary,
ColorTextPrimaryInverse,
ColorTextSecondary,
ColorTextSecondaryInverse,
ColorTextTertiary,
ColorTextTertiaryInverse,
ColorTextPlaceholder,
ColorTextPlaceholderInverse,
ColorTextNegative,
ColorTextNegativeInverse,
ColorTextWarning,
ColorTextWarningInverse,
ColorTextPositive,
ColorTextPositiveInverse,
ColorTextInteractive,
ColorTextInteractiveHover,
ColorTextInteractiveInverse,
ColorTextInteractiveInverseHover,
ColorIconPrimary,
ColorIconPrimaryInverse,
ColorIconInteractive,
ColorIconInteractiveInverse,
ColorIconNegative,
ColorIconNegativeInverse,
ColorIconWarning,
ColorIconWarningInverse,
ColorIconPositive,
ColorIconPositiveInverse,
ColorIconBgHover,
ColorIconBgHoverInverse,
ColorBorderDivider,
ColorBorderDividerInverse,
ColorBorderLight,
ColorBorderLightInverse,
ColorBorderMedium,
ColorBorderMediumInverse,
ColorBorderStrong,
ColorBorderStrongInverse,
ColorBorderNegative,
ColorBorderNegativeInverse,
ColorBrandPrimary,
ColorBrandSecondary,
ColorBrandAccent,
ColorBrandDark,
ColorChart1,
ColorChart2,
ColorChart3,
ColorChart4,
ColorChart5,
ColorChart6,
ColorChartNone,
ColorSurfacePrimary,
ColorSurfaceAlt,
ColorSurfaceUi,
ColorSurfaceUiInverse,
ColorSurfaceDark,
ColorSurfaceRow,
ColorSurfaceRowHover,
ColorSurfaceRowInverseHover,
ColorSurfaceSkeleton,
ColorSurfaceSkeletonInverse,
ColorSurfaceBackdrop,
ColorSurfaceSemanticsNegative,
ColorSurfaceSemanticsWarning,
ColorSurfaceSemanticsPositive,
ColorSurfaceSemanticsInformation,
ColorSurfaceSemanticsNeutral,
ColorBasePrimary,
ColorBaseAlt,
ColorBaseDark,
ColorButtonPrimary,
ColorButtonPrimaryHover,
ColorButtonPrimaryInverse,
ColorButtonPrimaryInverseHover,
ColorButtonSecondary,
ColorButtonSecondaryHover,
ColorButtonSecondaryInverseHover,
ColorButtonTertiary,
ColorButtonTertiaryHover,
ColorButtonTertiaryInverseHover,
ColorButtonPlain,
ColorButtonPlainHover,
ColorButtonPlainInverseHover
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
