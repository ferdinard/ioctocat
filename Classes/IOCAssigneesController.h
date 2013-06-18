#import "IOCCollectionController.h"
#import "IOCIssueManagementDelegate.h"

@class GHIssue;

@interface IOCAssigneesController : IOCCollectionController
@property(nonatomic,weak)id<IOCIssueManagementDelegate> delegate;

- (id)initWithIssue:(GHIssue *)issue;
@end