/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTCellIteratorData.h>

@class TSTCell, TSTTableDataStore, NSString;

@interface TSTMutableCellIteratorData : NSObject <TSTCellIteratorData> {

	BOOL _styleOnly;
	BOOL _commentStorageOnly;
	BOOL _rowHidden;
	BOOL _columnHidden;
	TSUCellCoord _cellID;
	TSTCell* _cell;
	TSTCellStorage* _cellRef;
	TSUCellRect _mergeRange;
	TSTTableDataStore* _tableDataStore;
	TSTCell* _cellForExpanding;

}

@property (nonatomic,retain) TSTTableDataStore * tableDataStore;              //@synthesize tableDataStore=_tableDataStore - In the implementation block
@property (nonatomic,retain) TSTCell * cellForExpanding;                      //@synthesize cellForExpanding=_cellForExpanding - In the implementation block
@property (assign,nonatomic) TSUCellCoord cellID;                             //@synthesize cellID=_cellID - In the implementation block
@property (nonatomic,retain) TSTCell * cell;                                  //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) TSTCellStorage* cellRef;                         //@synthesize cellRef=_cellRef - In the implementation block
@property (assign,nonatomic) TSUCellRect mergeRange;                          //@synthesize mergeRange=_mergeRange - In the implementation block
@property (assign,nonatomic) BOOL styleOnly;                                  //@synthesize styleOnly=_styleOnly - In the implementation block
@property (assign,nonatomic) BOOL commentStorageOnly;                         //@synthesize commentStorageOnly=_commentStorageOnly - In the implementation block
@property (assign,nonatomic) BOOL rowHidden;                                  //@synthesize rowHidden=_rowHidden - In the implementation block
@property (assign,nonatomic) BOOL columnHidden;                               //@synthesize columnHidden=_columnHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) int cellValueType; 
@property (nonatomic,readonly) BOOL cellHasFormula; 
@property (nonatomic,readonly) BOOL cellHasConditionalStyle; 
@property (nonatomic,readonly) BOOL cellHasCustomFormat; 
@property (nonatomic,readonly) BOOL cellHasCommentStorage; 
-(BOOL)cellHasCommentStorage;
-(BOOL)cellHasFormula;
-(int)cellValueType;
-(id)initWithTableModel:(id)arg1 ;
-(TSTCellStorage*)cellRef;
-(TSUCellRect)mergeRange;
-(void)expandCell;
-(BOOL)cellHasCustomFormat;
-(BOOL)cellHasConditionalStyle;
-(void)setCellRef:(TSTCellStorage*)arg1 ;
-(void)setMergeRange:(TSUCellRect)arg1 ;
-(void)setStyleOnly:(BOOL)arg1 ;
-(void)setCommentStorageOnly:(BOOL)arg1 ;
-(void)setRowHidden:(BOOL)arg1 ;
-(void)setColumnHidden:(BOOL)arg1 ;
-(BOOL)rowHidden;
-(BOOL)columnHidden;
-(TSTCell *)cellForExpanding;
-(TSTTableDataStore *)tableDataStore;
-(void)expandCellSuppressingFormulaInflation:(BOOL)arg1 ;
-(BOOL)styleOnly;
-(BOOL)commentStorageOnly;
-(void)takeValuesFromCellIteratorData:(id)arg1 ;
-(void)setTableDataStore:(TSTTableDataStore *)arg1 ;
-(void)setCellForExpanding:(TSTCell *)arg1 ;
-(void)dealloc;
-(void)reset;
-(TSTCell *)cell;
-(void)setCell:(TSTCell *)arg1 ;
-(BOOL)hidden;
-(TSUCellCoord)cellID;
-(void)setCellID:(TSUCellCoord)arg1 ;
@end

