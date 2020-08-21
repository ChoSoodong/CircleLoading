





#import<UIKit/UIKit.h>

//开始动画 在view上
#define BeginLoading [SDCircleLoadingView startAnimations:self.view]
#define EndLoading [SDCircleLoadingView stopAnimations:self.view]

//开始动画 在Window上
#define BeginLoadingAtWindow [SDCircleLoadingView startAnimations:nil]
#define EndLoadingAtWindow [SDCircleLoadingView stopAnimations:nil]

@interface SDCircleLoadingView : UIView
/** 开始的角度 默认为 -90°*/
@property (assign, nonatomic) CGFloat beginAngle;
/** 进度条的宽度 默认为10 */
@property (assign, nonatomic) CGFloat lineWidth;
/** 进度条的背景颜色 默认为 clearColor */
@property (strong, nonatomic) UIColor *trackBackgroundColor;
/** 进度条的颜色 默认为 redColor */
@property (strong, nonatomic) UIColor *trackColor;
/** 进度条两端的样式 默认为kCALineCapRound*/
@property (assign, nonatomic) NSString *lineCap;
/** 动画时间 默认为2s*/
@property (assign, nonatomic) CGFloat animateDuration;


//开始
+(void)startAnimations:(UIView *)view;
//结束
+(void)stopAnimations:(UIView *)view;

@end
