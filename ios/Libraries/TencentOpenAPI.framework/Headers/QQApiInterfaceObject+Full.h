//
//  QQApiInterfaceObject+Full.h
//  QQApi
//
//  Created by cocozzhang on 2019/7/25.
//

#ifndef QQApiInterfaceObject_Full_h
#define QQApiInterfaceObject_Full_h

#pragma mark - QQApiObject(关系链对象)

/**
 * 添加好友数据对象【full包】
 */
@interface QQApiAddFriendObject : QQApiObject

@property (nonatomic, copy) NSString *openID;
@property (nonatomic, copy) NSString *subID;
@property (nonatomic, copy) NSString *remark;

- (id)initWithOpenID:(NSString *)openID;
+ (id)objecWithOpenID:(NSString *)openID;

@end


/**
 * 游戏公会绑定群【full包】
 */
@interface QQApiGameConsortiumBindingGroupObject : QQApiObject

@property (nonatomic, copy)NSString *signature;
@property (nonatomic, copy)NSString *unionid;
@property (nonatomic, copy)NSString *zoneID;
@property (nonatomic, copy)NSString *appDisplayName;

- (id)initWithGameConsortium:(NSString *)signature unionid:(NSString *)unionid zoneID:(NSString *)zoneID appDisplayName:(NSString *)appDisplayName;

+ (id)objectWithGameConsortium:(NSString *)signature unionid:(NSString *)unionid zoneID:(NSString *)zoneID appDisplayName:(NSString *)appDisplayName;

@end


/**
 * 加入群【full包】
 */
@interface QQApiJoinGroupObject : QQApiObject

@property (nonatomic, copy) NSString *groupUin;
@property (nonatomic, copy) NSString *groupKey;

- (id)initWithGroupInfo:(NSString *)groupUin key:(NSString *)groupKey;
+ (id)objectWithGroupInfo:(NSString *)groupUin key:(NSString *)groupKey;
+ (id)objectWithGroupKey:(NSString *)groupKey;

@end

/**
 * 创建频道数据对象【full包】
 */
@interface QQApiCreateQQGroupProObject : QQApiObject

@property (nonatomic, copy) NSString *from;   // 必填，请求来源，由产品给每个接入应用分配，有一定的分配规范
@property (nonatomic, copy) NSString *openid; // 必填，发起创建频道请求的用户的openid，如王者战队队长的openid
@property (nonatomic, copy) NSString *guild_id; // 必填，游戏内工会/组织id，如王者战队id。测试时可以先随便填，正式接入时透传游戏方的数据。
@property (nonatomic, copy) NSString *zone_id;  // 必填，游戏内战队区服id，游戏方使用zone_id和guild_id联合参数来查询创建和加入频道的结果。测试时可以先随便填，正式接入时透传游戏方的数据。
@property (nonatomic, copy) NSString *guild_name;   // 选填，创建频道时，默认填入的频道昵称，比如可以带游戏内战队的战队名称
@property (nonatomic, copy) NSString *guild_avatar; // 选填，创建频道时，默认填入的频道头像url，大小限制4M

@property (nonatomic, copy) NSString *platid; // 选填，平台id，iOS：2，安卓：1
@property (nonatomic, copy) NSString *roleid; // 选填，角色ID
@property (nonatomic, copy) NSString *areaid; // 选填，游戏大区ID，理论只有QQ：1，微信：2，测试环境可能出现其他
@property (nonatomic, copy) NSString *user_zone_id; // 选填，用户区服id，王者的队长可能转让给非本区服的人，所以公会区服不一定是用户区服
@property (nonatomic, copy) NSString *user_label;   // 选填，用户标签
@property (nonatomic, copy) NSString *nick_name;    // 选填，游戏内昵称
@property (nonatomic, copy) NSString *type;         // 选填，0:工会（或不填），1:队伍，2:赛事
@property (nonatomic, copy) NSString *specify_uin;  // 选填，只能由指定uin的创建者发起创建
@property (nonatomic, copy) NSString *force_account_equal; // 选填，强制账号一致 1：强制，0：不强制
@property (nonatomic, copy) NSString *from_open_sdk;  // 选填，1: 互联sdk发起的请求；0: 其他请求
@property (nonatomic, copy) NSString *signKey;        // 必填，签名使用的key，使用appKey
@property (nonatomic, copy) NSString *openKey;        // 必填，当前用户的access_token

// 把模型的属性转成字典，key-属性名，value-属性的值
- (NSDictionary *)queryDictionary;

// 对所有属性签名后的字符串
- (NSString *)signString;

@end


/**
 * 加入频道的数据对象【full包】
 */
@interface QQApiJoinQQGroupProObject : QQApiObject

@property (nonatomic, copy) NSString *from;       // 必填，请求来源，由产品给每个接入应用分配，有一定的分配规范
@property (nonatomic, copy) NSString *openid;     // 必填，发起创建频道请求的用户的openid，如王者战队队长的openid
@property (nonatomic, copy) NSString *guild_id;   // 必填，游戏内工会/组织id，如王者战队id。测试时可以先随便填，正式接入时透传游戏方的数据。
@property (nonatomic, copy) NSString *zone_id;    // 必填，游戏内战队区服id，游戏方使用zone_id和guild_id联合参数来查询创建和加入频道的结果。测试时可以先随便填，正式接入时透传游戏方的数据。
@property (nonatomic, copy) NSString *guild_openid;   // 不用填写，互联SDK会去查询
@property (nonatomic, copy) NSString *specify_uin;    // 选填，只能由指定uin的创建者发起创建
@property (nonatomic, copy) NSString *force_account_equal; // 选填，强制账号一致 1：强制，0：不强制
@property (nonatomic, copy) NSString *from_open_sdk; // 选填，1: 互联sdk发起的请求；0: 其他请求
@property (nonatomic, copy) NSString *signKey; // 必填，签名使用的key，使用appKey
@property (nonatomic, copy) NSString *openKey; // 必填，当前用户的access_token

// 把模型的属性转成字典，key-属性名，value-属性的值
- (NSDictionary *)queryDictionary;

// 对所有属性签名后的字符串
- (NSString *)signString;

@end

// 查询频道的数据对象
@interface QQApiQueryQQGroupProInfoObject : QQApiObject

@property (nonatomic, copy) NSString *org_id;   // 必填，第三方应用的组织ID，比如公会ID，定义与创建和加入频道接口中的“guild_id”相同。
@property (nonatomic, copy) NSString *world_id; // 必填，与组织ID一起构成全局唯一，比如可以是区服ID，定义与创建和加入频道接口中的“zone_id”相同。
@property (nonatomic, copy) NSString *openKey;  // 必填，当前用户的access_token
@property (nonatomic, copy) NSString *openID;   // 必填，当前用户的openid

// 拼接好参数的查询频道url
- (NSString *)queryURLString;

// 检查是否有字段为空，存在空字段返回YES，否则返回NO
- (BOOL)hasNilField;

@end

/*
 * added by phillywang
 * 手Q860，sdk353支持新增透传字段tagName和messageExt，用于给MSDK统计用，MSDK分享调用以下接口
 */

@interface QQApiTextObject (Full)

- (id)initWithText:(NSString *)text tagName:(NSString *)tagName messageExt:(NSString *)messageExt;
+ (id)objectWithText:(NSString *)text tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

@end

@interface QQApiURLObject (Full)

- (instancetype)initWithURL:(NSURL *)url title:(NSString *)title description:(NSString *)description previewImageData:(NSData *)previewImageData tagName:(NSString *)tagName messageExt:(NSString *)messageExt targetContentType:(QQApiURLTargetType)targetContentType;

- (instancetype)initWithURL:(NSURL *)url title:(NSString *)title description:(NSString *)description previewImageURL:(NSURL *)previewURL tagName:(NSString *)tagName messageExt:(NSString *)messageExt targetContentType:(QQApiURLTargetType)targetContentType;

+ (instancetype)objectWithURL:(NSURL *)url title:(NSString *)title description:(NSString *)description previewImageData:(NSData *)data tagName:(NSString *)tagName messageExt:(NSString *)messageExt targetContentType:(QQApiURLTargetType)targetContentType;

+ (instancetype)objectWithURL:(NSURL *)url title:(NSString *)title description:(NSString *)description previewImageURL:(NSURL *)previewURL tagName:(NSString *)tagName messageExt:(NSString *)messageExt targetContentType:(QQApiURLTargetType)targetContentType;

@end

@interface QQApiExtendObject (Full)

- (id)initWithData:(NSData *)data previewImageData:(NSData *)previewImageData title:(NSString *)title description:(NSString *)description tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

- (id)initWithData:(NSData *)data previewImageData:(NSData *)previewImageData title:(NSString *)title description:(NSString *)description imageDataArray:(NSArray *)imageDataArray tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

+ (id)objectWithData:(NSData *)data previewImageData:(NSData *)previewImageData title:(NSString *)title description:(NSString *)description tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

+ (id)objectWithData:(NSData *)data previewImageData:(NSData *)previewImageData title:(NSString *)title description:(NSString *)description imageDataArray:(NSArray *)imageDataArray tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

@end

@interface QQApiWebImageObject (Full)

- (id)initWithPreviewImageURL:(NSURL *)previewImageURL title:(NSString *)title description:(NSString *)description tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

+ (id)objectWithPreviewImageURL:(NSURL *)previewImageURL title:(NSString *)title description:(NSString *)description tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

@end

@interface QQApiAudioObject (Full)

+ (instancetype)objectWithURL:(NSURL *)url title:(NSString *)title description:(NSString *)description previewImageData:(NSData *)data tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

+ (instancetype)objectWithURL:(NSURL *)url title:(NSString *)title description:(NSString *)description previewImageURL:(NSURL *)previewURL tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

@end

@interface QQApiVideoObject (Full)

+ (id)objectWithURL:(NSURL *)url title:(NSString *)title description:(NSString *)description previewImageData:(NSData *)data tagName:(NSString *)tagName messageExt:(NSString *)messageExt;
+ (id)objectWithURL:(NSURL *)url title:(NSString *)title description:(NSString *)description previewImageURL:(NSURL *)previewURL tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

@end

@interface QQApiNewsObject (Full)

+ (id)objectWithURL:(NSURL *)url title:(NSString *)title description:(NSString *)description previewImageData:(NSData *)data tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

+ (id)objectWithURL:(NSURL *)url title:(NSString *)title description:(NSString *)description previewImageURL:(NSURL *)previewURL tagName:(NSString *)tagName messageExt:(NSString *)messageExt;

@end


#endif /* QQApiInterfaceObject_Full_h */
