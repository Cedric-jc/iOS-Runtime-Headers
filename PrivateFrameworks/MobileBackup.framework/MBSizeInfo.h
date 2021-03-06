/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBSizeInfo : NSObject <NSCoding, NSCopying> {
    unsigned long long  _size;
    unsigned int  _state;
}

@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned int state;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned long long)size;
- (unsigned int)state;

@end
