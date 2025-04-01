//
//  TencentOAuth+Full.h
//  TencentOpenApi_IOS
//
//  Created by 可可 on 2020/11/11.
//  Copyright © 2020 Tencent. All rights reserved.
//

#ifndef TencentOAuth_Full_h
#define TencentOAuth_Full_h
#import "TencentOAuth.h"

@interface TencentOAuth (Private)
/** 代理登陆成功后，从手Q透传的数据 */
@property(nonatomic, copy) NSDictionary* proxyAuthResp;


/**
 * 代理授权登录
 * 用于代理第三方授权登录，需传入第三方的信息，默认使用server_side模式登录，登录成功会返回第三方的登录code。
 * 该功能需要SDK版本3.3.9以上，且本地手Q版本8.3.6以上
 * @param proxyAppid 代理第三方的APPID
 * @param proxyPermissions 代理第三方所需要的授权信息
 */
- (BOOL)proxyAuthorize:(NSString*)proxyAppid
           permissions:(NSArray*)proxyPermissions;
/**
 * 同上
 * @param state 安全标志位，第三方用来保证不是伪造的请求，登录成功后会回传state，放在passData字段里面。建议使用随机数, 最大长度128
 */
- (BOOL)proxyAuthorize:(NSString*)proxyAppid
           permissions:(NSArray*)proxyPermissions
            state:(NSString*)state;

@end
#endif /* TencentOAuth_Full_h */
