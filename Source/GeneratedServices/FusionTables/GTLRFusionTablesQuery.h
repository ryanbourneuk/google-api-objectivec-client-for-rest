// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Fusion Tables API (fusiontables/v2)
// Description:
//   API for working with Fusion Tables data.
// Documentation:
//   https://developers.google.com/fusiontables

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFusionTables_Column;
@class GTLRFusionTables_StyleSetting;
@class GTLRFusionTables_Table;
@class GTLRFusionTables_Template;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other FusionTables query classes.
 */
@interface GTLRFusionTablesQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Deletes the specified column.
 *
 *  Method: fusiontables.column.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_ColumnDelete : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForColumnDeleteWithtableId:columnId:]

/** Name or identifier for the column being deleted. */
@property(nonatomic, copy, nullable) NSString *columnId;

/** Table from which the column is being deleted. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes the specified column.
 *
 *  @param tableId Table from which the column is being deleted.
 *  @param columnId Name or identifier for the column being deleted.
 *
 *  @return GTLRFusionTablesQuery_ColumnDelete
 */
+ (instancetype)queryWithTableId:(NSString *)tableId
                        columnId:(NSString *)columnId;

@end

/**
 *  Retrieves a specific column by its ID.
 *
 *  Method: fusiontables.column.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_ColumnGet : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForColumnGetWithtableId:columnId:]

/** Name or identifier for the column that is being requested. */
@property(nonatomic, copy, nullable) NSString *columnId;

/** Table to which the column belongs. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Column.
 *
 *  Retrieves a specific column by its ID.
 *
 *  @param tableId Table to which the column belongs.
 *  @param columnId Name or identifier for the column that is being requested.
 *
 *  @return GTLRFusionTablesQuery_ColumnGet
 */
+ (instancetype)queryWithTableId:(NSString *)tableId
                        columnId:(NSString *)columnId;

@end

/**
 *  Adds a new column to the table.
 *
 *  Method: fusiontables.column.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_ColumnInsert : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForColumnInsertWithObject:tableId:]

/** Table for which a new column is being added. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Column.
 *
 *  Adds a new column to the table.
 *
 *  @param object The @c GTLRFusionTables_Column to include in the query.
 *  @param tableId Table for which a new column is being added.
 *
 *  @return GTLRFusionTablesQuery_ColumnInsert
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_Column *)object
                        tableId:(NSString *)tableId;

@end

/**
 *  Retrieves a list of columns.
 *
 *  Method: fusiontables.column.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_ColumnList : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForColumnListWithtableId:]

/** Maximum number of columns to return. Default is 5. */
@property(nonatomic, assign) NSUInteger maxResults;

/** Continuation token specifying which result page to return. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Table whose columns are being listed. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_ColumnList.
 *
 *  Retrieves a list of columns.
 *
 *  @param tableId Table whose columns are being listed.
 *
 *  @return GTLRFusionTablesQuery_ColumnList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithTableId:(NSString *)tableId;

@end

/**
 *  Updates the name or type of an existing column. This method supports patch
 *  semantics.
 *
 *  Method: fusiontables.column.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_ColumnPatch : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForColumnPatchWithObject:tableId:columnId:]

/** Name or identifier for the column that is being updated. */
@property(nonatomic, copy, nullable) NSString *columnId;

/** Table for which the column is being updated. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Column.
 *
 *  Updates the name or type of an existing column. This method supports patch
 *  semantics.
 *
 *  @param object The @c GTLRFusionTables_Column to include in the query.
 *  @param tableId Table for which the column is being updated.
 *  @param columnId Name or identifier for the column that is being updated.
 *
 *  @return GTLRFusionTablesQuery_ColumnPatch
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_Column *)object
                        tableId:(NSString *)tableId
                       columnId:(NSString *)columnId;

@end

/**
 *  Updates the name or type of an existing column.
 *
 *  Method: fusiontables.column.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_ColumnUpdate : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForColumnUpdateWithObject:tableId:columnId:]

/** Name or identifier for the column that is being updated. */
@property(nonatomic, copy, nullable) NSString *columnId;

/** Table for which the column is being updated. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Column.
 *
 *  Updates the name or type of an existing column.
 *
 *  @param object The @c GTLRFusionTables_Column to include in the query.
 *  @param tableId Table for which the column is being updated.
 *  @param columnId Name or identifier for the column that is being updated.
 *
 *  @return GTLRFusionTablesQuery_ColumnUpdate
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_Column *)object
                        tableId:(NSString *)tableId
                       columnId:(NSString *)columnId;

@end

/**
 *  Executes a Fusion Tables SQL statement, which can be any of
 *  - SELECT
 *  - INSERT
 *  - UPDATE
 *  - DELETE
 *  - SHOW
 *  - DESCRIBE
 *  - CREATE statement.
 *
 *  Method: fusiontables.query.sql
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_QuerySql : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForQuerySqlWithsql:]

/** Whether column names are included in the first row. Default is true. */
@property(nonatomic, assign) BOOL hdrs;

/**
 *  A Fusion Tables SQL statement, which can be any of
 *  - SELECT
 *  - INSERT
 *  - UPDATE
 *  - DELETE
 *  - SHOW
 *  - DESCRIBE
 *  - CREATE
 */
@property(nonatomic, copy, nullable) NSString *sql;

/**
 *  Whether typed values are returned in the (JSON) response: numbers for
 *  numeric values and parsed geometries for KML values. Default is true.
 */
@property(nonatomic, assign) BOOL typed;

/**
 *  Fetches a @c GTLRFusionTables_Sqlresponse.
 *
 *  Executes a Fusion Tables SQL statement, which can be any of
 *  - SELECT
 *  - INSERT
 *  - UPDATE
 *  - DELETE
 *  - SHOW
 *  - DESCRIBE
 *  - CREATE statement.
 *
 *  @param sql A Fusion Tables SQL statement, which can be any of
 *    - SELECT
 *    - INSERT
 *    - UPDATE
 *    - DELETE
 *    - SHOW
 *    - DESCRIBE
 *    - CREATE
 *
 *  @return GTLRFusionTablesQuery_QuerySql
 */
+ (instancetype)queryWithSql:(NSString *)sql;

/**
 *  Fetches the requested resource data as a @c GTLRDataObject.
 *
 *  Executes a Fusion Tables SQL statement, which can be any of
 *  - SELECT
 *  - INSERT
 *  - UPDATE
 *  - DELETE
 *  - SHOW
 *  - DESCRIBE
 *  - CREATE statement.
 *
 *  @param sql A Fusion Tables SQL statement, which can be any of
 *    - SELECT
 *    - INSERT
 *    - UPDATE
 *    - DELETE
 *    - SHOW
 *    - DESCRIBE
 *    - CREATE
 *
 *  @return GTLRFusionTablesQuery_QuerySql
 */
+ (instancetype)queryForMediaWithSql:(NSString *)sql;

@end

/**
 *  Executes a SQL statement which can be any of
 *  - SELECT
 *  - SHOW
 *  - DESCRIBE
 *
 *  Method: fusiontables.query.sqlGet
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_QuerySqlGet : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForQuerySqlGetWithsql:]

/** Whether column names are included (in the first row). Default is true. */
@property(nonatomic, assign) BOOL hdrs;

/**
 *  A SQL statement which can be any of
 *  - SELECT
 *  - SHOW
 *  - DESCRIBE
 */
@property(nonatomic, copy, nullable) NSString *sql;

/**
 *  Whether typed values are returned in the (JSON) response: numbers for
 *  numeric values and parsed geometries for KML values. Default is true.
 */
@property(nonatomic, assign) BOOL typed;

/**
 *  Fetches a @c GTLRFusionTables_Sqlresponse.
 *
 *  Executes a SQL statement which can be any of
 *  - SELECT
 *  - SHOW
 *  - DESCRIBE
 *
 *  @param sql A SQL statement which can be any of
 *    - SELECT
 *    - SHOW
 *    - DESCRIBE
 *
 *  @return GTLRFusionTablesQuery_QuerySqlGet
 */
+ (instancetype)queryWithSql:(NSString *)sql;

/**
 *  Fetches the requested resource data as a @c GTLRDataObject.
 *
 *  Executes a SQL statement which can be any of
 *  - SELECT
 *  - SHOW
 *  - DESCRIBE
 *
 *  @param sql A SQL statement which can be any of
 *    - SELECT
 *    - SHOW
 *    - DESCRIBE
 *
 *  @return GTLRFusionTablesQuery_QuerySqlGet
 */
+ (instancetype)queryForMediaWithSql:(NSString *)sql;

@end

/**
 *  Deletes a style.
 *
 *  Method: fusiontables.style.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_StyleDelete : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForStyleDeleteWithtableId:styleId:]

/** Identifier (within a table) for the style being deleted */
@property(nonatomic, assign) NSInteger styleId;

/** Table from which the style is being deleted */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes a style.
 *
 *  @param tableId Table from which the style is being deleted
 *  @param styleId Identifier (within a table) for the style being deleted
 *
 *  @return GTLRFusionTablesQuery_StyleDelete
 */
+ (instancetype)queryWithTableId:(NSString *)tableId
                         styleId:(NSInteger)styleId;

@end

/**
 *  Gets a specific style.
 *
 *  Method: fusiontables.style.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_StyleGet : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForStyleGetWithtableId:styleId:]

/** Identifier (integer) for a specific style in a table */
@property(nonatomic, assign) NSInteger styleId;

/** Table to which the requested style belongs */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_StyleSetting.
 *
 *  Gets a specific style.
 *
 *  @param tableId Table to which the requested style belongs
 *  @param styleId Identifier (integer) for a specific style in a table
 *
 *  @return GTLRFusionTablesQuery_StyleGet
 */
+ (instancetype)queryWithTableId:(NSString *)tableId
                         styleId:(NSInteger)styleId;

@end

/**
 *  Adds a new style for the table.
 *
 *  Method: fusiontables.style.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_StyleInsert : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForStyleInsertWithObject:tableId:]

/** Table for which a new style is being added */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_StyleSetting.
 *
 *  Adds a new style for the table.
 *
 *  @param object The @c GTLRFusionTables_StyleSetting to include in the query.
 *  @param tableId Table for which a new style is being added
 *
 *  @return GTLRFusionTablesQuery_StyleInsert
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_StyleSetting *)object
                        tableId:(NSString *)tableId;

@end

/**
 *  Retrieves a list of styles.
 *
 *  Method: fusiontables.style.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_StyleList : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForStyleListWithtableId:]

/** Maximum number of styles to return. Optional. Default is 5. */
@property(nonatomic, assign) NSUInteger maxResults;

/** Continuation token specifying which result page to return. Optional. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Table whose styles are being listed */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_StyleSettingList.
 *
 *  Retrieves a list of styles.
 *
 *  @param tableId Table whose styles are being listed
 *
 *  @return GTLRFusionTablesQuery_StyleList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithTableId:(NSString *)tableId;

@end

/**
 *  Updates an existing style. This method supports patch semantics.
 *
 *  Method: fusiontables.style.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_StylePatch : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForStylePatchWithObject:tableId:styleId:]

/** Identifier (within a table) for the style being updated. */
@property(nonatomic, assign) NSInteger styleId;

/** Table whose style is being updated. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_StyleSetting.
 *
 *  Updates an existing style. This method supports patch semantics.
 *
 *  @param object The @c GTLRFusionTables_StyleSetting to include in the query.
 *  @param tableId Table whose style is being updated.
 *  @param styleId Identifier (within a table) for the style being updated.
 *
 *  @return GTLRFusionTablesQuery_StylePatch
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_StyleSetting *)object
                        tableId:(NSString *)tableId
                        styleId:(NSInteger)styleId;

@end

/**
 *  Updates an existing style.
 *
 *  Method: fusiontables.style.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_StyleUpdate : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForStyleUpdateWithObject:tableId:styleId:]

/** Identifier (within a table) for the style being updated. */
@property(nonatomic, assign) NSInteger styleId;

/** Table whose style is being updated. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_StyleSetting.
 *
 *  Updates an existing style.
 *
 *  @param object The @c GTLRFusionTables_StyleSetting to include in the query.
 *  @param tableId Table whose style is being updated.
 *  @param styleId Identifier (within a table) for the style being updated.
 *
 *  @return GTLRFusionTablesQuery_StyleUpdate
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_StyleSetting *)object
                        tableId:(NSString *)tableId
                        styleId:(NSInteger)styleId;

@end

/**
 *  Copies a table.
 *
 *  Method: fusiontables.table.copy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_TableCopy : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTableCopyWithtableId:]

/** Whether to also copy tabs, styles, and templates. Default is false. */
@property(nonatomic, assign) BOOL copyPresentation;

/** ID of the table that is being copied. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Table.
 *
 *  Copies a table.
 *
 *  @param tableId ID of the table that is being copied.
 *
 *  @return GTLRFusionTablesQuery_TableCopy
 */
+ (instancetype)queryWithTableId:(NSString *)tableId;

@end

/**
 *  Deletes a table.
 *
 *  Method: fusiontables.table.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TableDelete : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTableDeleteWithtableId:]

/** ID of the table to be deleted. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes a table.
 *
 *  @param tableId ID of the table to be deleted.
 *
 *  @return GTLRFusionTablesQuery_TableDelete
 */
+ (instancetype)queryWithTableId:(NSString *)tableId;

@end

/**
 *  Retrieves a specific table by its ID.
 *
 *  Method: fusiontables.table.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_TableGet : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTableGetWithtableId:]

/** Identifier for the table being requested. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Table.
 *
 *  Retrieves a specific table by its ID.
 *
 *  @param tableId Identifier for the table being requested.
 *
 *  @return GTLRFusionTablesQuery_TableGet
 */
+ (instancetype)queryWithTableId:(NSString *)tableId;

@end

/**
 *  Imports more rows into a table.
 *
 *  Method: fusiontables.table.importRows
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TableImportRows : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTableImportRowsWithtableId:]

/**
 *  The delimiter used to separate cell values. This can only consist of a
 *  single character. Default is ,.
 */
@property(nonatomic, copy, nullable) NSString *delimiter;

/**
 *  The encoding of the content. Default is UTF-8. Use auto-detect if you are
 *  unsure of the encoding.
 */
@property(nonatomic, copy, nullable) NSString *encoding;

/**
 *  The index of the line up to which data will be imported. Default is to
 *  import the entire file. If endLine is negative, it is an offset from the end
 *  of the file; the imported content will exclude the last endLine lines.
 */
@property(nonatomic, assign) NSInteger endLine;

/**
 *  Whether the imported CSV must have the same number of values for each row.
 *  If false, rows with fewer values will be padded with empty values. Default
 *  is true.
 */
@property(nonatomic, assign) BOOL isStrict;

/**
 *  The index of the first line from which to start importing, inclusive.
 *  Default is 0.
 */
@property(nonatomic, assign) NSInteger startLine;

/** The table into which new rows are being imported. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Import.
 *
 *  Imports more rows into a table.
 *
 *  @param tableId The table into which new rows are being imported.
 *  @param uploadParameters The media to include in this query. Maximum size
 *    250MB. Accepted MIME type: application/octet-stream
 *
 *  @return GTLRFusionTablesQuery_TableImportRows
 */
+ (instancetype)queryWithTableId:(NSString *)tableId
                uploadParameters:(nullable GTLRUploadParameters *)uploadParameters;

@end

/**
 *  Imports a new table.
 *
 *  Method: fusiontables.table.importTable
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TableImportTable : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTableImportTableWithname:]

/**
 *  The delimiter used to separate cell values. This can only consist of a
 *  single character. Default is ,.
 */
@property(nonatomic, copy, nullable) NSString *delimiter;

/**
 *  The encoding of the content. Default is UTF-8. Use auto-detect if you are
 *  unsure of the encoding.
 */
@property(nonatomic, copy, nullable) NSString *encoding;

/** The name to be assigned to the new table. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFusionTables_Table.
 *
 *  Imports a new table.
 *
 *  @param name The name to be assigned to the new table.
 *  @param uploadParameters The media to include in this query. Maximum size
 *    250MB. Accepted MIME type: application/octet-stream
 *
 *  @return GTLRFusionTablesQuery_TableImportTable
 */
+ (instancetype)queryWithName:(NSString *)name
             uploadParameters:(nullable GTLRUploadParameters *)uploadParameters;

@end

/**
 *  Creates a new table.
 *
 *  Method: fusiontables.table.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TableInsert : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTableInsertWithObject:]

/**
 *  Fetches a @c GTLRFusionTables_Table.
 *
 *  Creates a new table.
 *
 *  @param object The @c GTLRFusionTables_Table to include in the query.
 *
 *  @return GTLRFusionTablesQuery_TableInsert
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_Table *)object;

@end

/**
 *  Retrieves a list of tables a user owns.
 *
 *  Method: fusiontables.table.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_TableList : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTableList]

/** Maximum number of tables to return. Default is 5. */
@property(nonatomic, assign) NSUInteger maxResults;

/** Continuation token specifying which result page to return. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRFusionTables_TableList.
 *
 *  Retrieves a list of tables a user owns.
 *
 *  @return GTLRFusionTablesQuery_TableList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Updates an existing table. Unless explicitly requested, only the name,
 *  description, and attribution will be updated. This method supports patch
 *  semantics.
 *
 *  Method: fusiontables.table.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TablePatch : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTablePatchWithObject:tableId:]

/**
 *  Whether the view definition is also updated. The specified view definition
 *  replaces the existing one. Only a view can be updated with a new definition.
 */
@property(nonatomic, assign) BOOL replaceViewDefinition;

/** ID of the table that is being updated. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Table.
 *
 *  Updates an existing table. Unless explicitly requested, only the name,
 *  description, and attribution will be updated. This method supports patch
 *  semantics.
 *
 *  @param object The @c GTLRFusionTables_Table to include in the query.
 *  @param tableId ID of the table that is being updated.
 *
 *  @return GTLRFusionTablesQuery_TablePatch
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_Table *)object
                        tableId:(NSString *)tableId;

@end

/**
 *  Replaces rows of the table with the rows of the spreadsheet that is first
 *  imported from. Current rows remain visible until all replacement rows are
 *  ready.
 *
 *  Method: fusiontables.table.refetchSheet
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TableRefetchSheet : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTableRefetchSheetWithtableId:]

/** Table whose rows will be replaced from the spreadsheet. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Task.
 *
 *  Replaces rows of the table with the rows of the spreadsheet that is first
 *  imported from. Current rows remain visible until all replacement rows are
 *  ready.
 *
 *  @param tableId Table whose rows will be replaced from the spreadsheet.
 *
 *  @return GTLRFusionTablesQuery_TableRefetchSheet
 */
+ (instancetype)queryWithTableId:(NSString *)tableId;

@end

/**
 *  Replaces rows of an existing table. Current rows remain visible until all
 *  replacement rows are ready.
 *
 *  Method: fusiontables.table.replaceRows
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TableReplaceRows : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTableReplaceRowsWithtableId:]

/**
 *  The delimiter used to separate cell values. This can only consist of a
 *  single character. Default is ,.
 */
@property(nonatomic, copy, nullable) NSString *delimiter;

/**
 *  The encoding of the content. Default is UTF-8. Use 'auto-detect' if you are
 *  unsure of the encoding.
 */
@property(nonatomic, copy, nullable) NSString *encoding;

/**
 *  The index of the line up to which data will be imported. Default is to
 *  import the entire file. If endLine is negative, it is an offset from the end
 *  of the file; the imported content will exclude the last endLine lines.
 */
@property(nonatomic, assign) NSInteger endLine;

/**
 *  Whether the imported CSV must have the same number of column values for each
 *  row. If true, throws an exception if the CSV does not have the same number
 *  of columns. If false, rows with fewer column values will be padded with
 *  empty values. Default is true.
 */
@property(nonatomic, assign) BOOL isStrict;

/**
 *  The index of the first line from which to start importing, inclusive.
 *  Default is 0.
 */
@property(nonatomic, assign) NSInteger startLine;

/** Table whose rows will be replaced. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Task.
 *
 *  Replaces rows of an existing table. Current rows remain visible until all
 *  replacement rows are ready.
 *
 *  @param tableId Table whose rows will be replaced.
 *  @param uploadParameters The media to include in this query. Maximum size
 *    250MB. Accepted MIME type: application/octet-stream
 *
 *  @return GTLRFusionTablesQuery_TableReplaceRows
 */
+ (instancetype)queryWithTableId:(NSString *)tableId
                uploadParameters:(nullable GTLRUploadParameters *)uploadParameters;

@end

/**
 *  Updates an existing table. Unless explicitly requested, only the name,
 *  description, and attribution will be updated.
 *
 *  Method: fusiontables.table.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TableUpdate : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTableUpdateWithObject:tableId:]

/**
 *  Whether the view definition is also updated. The specified view definition
 *  replaces the existing one. Only a view can be updated with a new definition.
 */
@property(nonatomic, assign) BOOL replaceViewDefinition;

/** ID of the table that is being updated. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Table.
 *
 *  Updates an existing table. Unless explicitly requested, only the name,
 *  description, and attribution will be updated.
 *
 *  @param object The @c GTLRFusionTables_Table to include in the query.
 *  @param tableId ID of the table that is being updated.
 *
 *  @return GTLRFusionTablesQuery_TableUpdate
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_Table *)object
                        tableId:(NSString *)tableId;

@end

/**
 *  Deletes a specific task by its ID, unless that task has already started
 *  running.
 *
 *  Method: fusiontables.task.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TaskDelete : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTaskDeleteWithtableId:taskId:]

/** Table from which the task is being deleted. */
@property(nonatomic, copy, nullable) NSString *tableId;

/** The identifier of the task to delete. */
@property(nonatomic, copy, nullable) NSString *taskId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes a specific task by its ID, unless that task has already started
 *  running.
 *
 *  @param tableId Table from which the task is being deleted.
 *  @param taskId The identifier of the task to delete.
 *
 *  @return GTLRFusionTablesQuery_TaskDelete
 */
+ (instancetype)queryWithTableId:(NSString *)tableId
                          taskId:(NSString *)taskId;

@end

/**
 *  Retrieves a specific task by its ID.
 *
 *  Method: fusiontables.task.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_TaskGet : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTaskGetWithtableId:taskId:]

/** Table to which the task belongs. */
@property(nonatomic, copy, nullable) NSString *tableId;

/** The identifier of the task to get. */
@property(nonatomic, copy, nullable) NSString *taskId;

/**
 *  Fetches a @c GTLRFusionTables_Task.
 *
 *  Retrieves a specific task by its ID.
 *
 *  @param tableId Table to which the task belongs.
 *  @param taskId The identifier of the task to get.
 *
 *  @return GTLRFusionTablesQuery_TaskGet
 */
+ (instancetype)queryWithTableId:(NSString *)tableId
                          taskId:(NSString *)taskId;

@end

/**
 *  Retrieves a list of tasks.
 *
 *  Method: fusiontables.task.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_TaskList : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTaskListWithtableId:]

/** Maximum number of tasks to return. Default is 5. */
@property(nonatomic, assign) NSUInteger maxResults;

/** Continuation token specifying which result page to return. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Index of the first result returned in the current page. */
@property(nonatomic, assign) NSUInteger startIndex;

/** Table whose tasks are being listed. */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_TaskList.
 *
 *  Retrieves a list of tasks.
 *
 *  @param tableId Table whose tasks are being listed.
 *
 *  @return GTLRFusionTablesQuery_TaskList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithTableId:(NSString *)tableId;

@end

/**
 *  Deletes a template
 *
 *  Method: fusiontables.template.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TemplateDelete : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTemplateDeleteWithtableId:templateId:]

/** Table from which the template is being deleted */
@property(nonatomic, copy, nullable) NSString *tableId;

/** Identifier for the template which is being deleted */
@property(nonatomic, assign) NSInteger templateId;

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  Deletes a template
 *
 *  @param tableId Table from which the template is being deleted
 *  @param templateId Identifier for the template which is being deleted
 *
 *  @return GTLRFusionTablesQuery_TemplateDelete
 */
+ (instancetype)queryWithTableId:(NSString *)tableId
                      templateId:(NSInteger)templateId;

@end

/**
 *  Retrieves a specific template by its id
 *
 *  Method: fusiontables.template.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_TemplateGet : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTemplateGetWithtableId:templateId:]

/** Table to which the template belongs */
@property(nonatomic, copy, nullable) NSString *tableId;

/** Identifier for the template that is being requested */
@property(nonatomic, assign) NSInteger templateId;

/**
 *  Fetches a @c GTLRFusionTables_Template.
 *
 *  Retrieves a specific template by its id
 *
 *  @param tableId Table to which the template belongs
 *  @param templateId Identifier for the template that is being requested
 *
 *  @return GTLRFusionTablesQuery_TemplateGet
 */
+ (instancetype)queryWithTableId:(NSString *)tableId
                      templateId:(NSInteger)templateId;

@end

/**
 *  Creates a new template for the table.
 *
 *  Method: fusiontables.template.insert
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TemplateInsert : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTemplateInsertWithObject:tableId:]

/** Table for which a new template is being created */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_Template.
 *
 *  Creates a new template for the table.
 *
 *  @param object The @c GTLRFusionTables_Template to include in the query.
 *  @param tableId Table for which a new template is being created
 *
 *  @return GTLRFusionTablesQuery_TemplateInsert
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_Template *)object
                        tableId:(NSString *)tableId;

@end

/**
 *  Retrieves a list of templates.
 *
 *  Method: fusiontables.template.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 *    @c kGTLRAuthScopeFusionTablesReadonly
 */
@interface GTLRFusionTablesQuery_TemplateList : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTemplateListWithtableId:]

/** Maximum number of templates to return. Optional. Default is 5. */
@property(nonatomic, assign) NSUInteger maxResults;

/** Continuation token specifying which results page to return. Optional. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Identifier for the table whose templates are being requested */
@property(nonatomic, copy, nullable) NSString *tableId;

/**
 *  Fetches a @c GTLRFusionTables_TemplateList.
 *
 *  Retrieves a list of templates.
 *
 *  @param tableId Identifier for the table whose templates are being requested
 *
 *  @return GTLRFusionTablesQuery_TemplateList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithTableId:(NSString *)tableId;

@end

/**
 *  Updates an existing template. This method supports patch semantics.
 *
 *  Method: fusiontables.template.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TemplatePatch : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTemplatePatchWithObject:tableId:templateId:]

/** Table to which the updated template belongs */
@property(nonatomic, copy, nullable) NSString *tableId;

/** Identifier for the template that is being updated */
@property(nonatomic, assign) NSInteger templateId;

/**
 *  Fetches a @c GTLRFusionTables_Template.
 *
 *  Updates an existing template. This method supports patch semantics.
 *
 *  @param object The @c GTLRFusionTables_Template to include in the query.
 *  @param tableId Table to which the updated template belongs
 *  @param templateId Identifier for the template that is being updated
 *
 *  @return GTLRFusionTablesQuery_TemplatePatch
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_Template *)object
                        tableId:(NSString *)tableId
                     templateId:(NSInteger)templateId;

@end

/**
 *  Updates an existing template
 *
 *  Method: fusiontables.template.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFusionTables
 */
@interface GTLRFusionTablesQuery_TemplateUpdate : GTLRFusionTablesQuery
// Previous library name was
//   +[GTLQueryFusionTables queryForTemplateUpdateWithObject:tableId:templateId:]

/** Table to which the updated template belongs */
@property(nonatomic, copy, nullable) NSString *tableId;

/** Identifier for the template that is being updated */
@property(nonatomic, assign) NSInteger templateId;

/**
 *  Fetches a @c GTLRFusionTables_Template.
 *
 *  Updates an existing template
 *
 *  @param object The @c GTLRFusionTables_Template to include in the query.
 *  @param tableId Table to which the updated template belongs
 *  @param templateId Identifier for the template that is being updated
 *
 *  @return GTLRFusionTablesQuery_TemplateUpdate
 */
+ (instancetype)queryWithObject:(GTLRFusionTables_Template *)object
                        tableId:(NSString *)tableId
                     templateId:(NSInteger)templateId;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
