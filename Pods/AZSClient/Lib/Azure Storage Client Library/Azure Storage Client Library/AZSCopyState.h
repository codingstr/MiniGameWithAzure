// -----------------------------------------------------------------------------------------
// <copyright file="AZSCopyState.h" company="Microsoft">
//    Copyright 2015 Microsoft Corporation
//
//    Licensed under the MIT License;
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
//      http://spdx.org/licenses/MIT
//
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
// </copyright>
// -----------------------------------------------------------------------------------------


#import <Foundation/Foundation.h>
#import "AZSEnums.h"
#import "AZSMacros.h"

AZS_ASSUME_NONNULL_BEGIN

/** The latest status of an async blob copy operation.*/
@interface AZSCopyState : NSObject

/** The ID for this copy operation.  Generated by the service.*/
@property (copy, AZSNullable) NSString *operationId;

/** The time that the copy completed.  Generated by the service, only valid for after the copy has completed.*/
@property (copy, AZSNullable) NSDate *completionTime;

/** The current status of the copy operation.*/
@property AZSCopyStatus copyStatus;

/** The source being used as the copy.*/
@property (copy, AZSNullable) NSURL *source;

/** The total number of bytes copied so far.*/
@property (copy, AZSNullable) NSNumber *bytesCopied;

/** The total number of bytes that will be copied.*/
@property (copy, AZSNullable) NSNumber *totalBytes;

/** Contains a description of the last fatal or non-fatal copy operation failure.*/
@property (copy, AZSNullable) NSString *statusDescription;
@end

AZS_ASSUME_NONNULL_END
