/*
# PostgreSQL Database Modeler (pgModeler)
#
# Copyright 2006-2019 - Raphael Araújo e Silva <raphael@pgmodeler.io>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation version 3.
#
# This program is distributed in the hope that it will be useful),
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# The complete text of GPLv3 is at LICENSE file on source code root directory.
# Also), you can get the complete GNU General Public License at <http://www.gnu.org/licenses/>
*/

#include "attributes.h"

namespace Attributes {
	const QString
	ActiveLayers=QString("active-layers"),
	AdminOption=QString("admin-option"),
	AdminRoles=QString("admin-roles"),
	Alias=QString("alias"),
	Alignment=QString("alignment"),
	AlignObjsToGrid=QString("align-objs-to-grid"),
	AllowConns=QString("allow-conns"),
	AlterCmds=QString("alter-cmds"),
	AnalyzeFunc=QString("analyze"),
	AncestorTable=QString("ancestor-table"),
	AppendAtEod=QString("append-at-eod"),
	AppendedSql=QString("appended-sql"),
	Application=QString("application"),
	ApplyOnServer="apply-on-server",
	ArgCount=QString("arg-count"),
	ArgDefaults=QString("arg-defaults"),
	ArgDefCount=QString("arg-def-count"),
	ArgModes=QString("arg-modes"),
	ArgNames=QString("arg-names"),
	ArgTypes=QString("arg-types"),
	Arguments=QString("arguments"),
	AscOrder=QString("asc-order"),
	Assignment=QString("assignment"),
	AttribsPage=QString("attribs-page"),
	AttribsPerPage=QString("attribs-per-page"),
	Attribute=QString("attribute"),
	AutoBrowseDb=QString("auto-browse-db"),
	AutoSaveInterval=QString("autosave-interval"),
	BackgroundColor=QString("background-color"),
	BaseType=QString("base"),
	Before=QString("before"),
	BehaviorType=QString("behavior-type"),
	Bold=QString("bold"),
	BorderColor=QString("border-color"),
	Bottom=QString("bottom"),
	Buffering=QString("buffering"),
	BypassRls=QString("bypassrls"),
	ByValue=QString("by-value"),
	Cache=QString("cache"),
	CanonicalFunc=QString("canonical"),
	CanvasCornerMove=QString("canvas-corner-move"),
	Cascade=QString("cascade"),
	CaseSensitive=QString("case-sensitive"),
	CastType=QString("cast-type"),
	Category=QString("category"),
	Change=QString("change"),
	Changelog=QString("changelog"),
	CheckExp=QString("check-exp"),
	CheckUpdate=QString("check-update"),
	CkConstr=QString("ck-constr"),
	ClientEncoding=QString("client-encoding"),
	CodeCompletion=QString("code-completion"),
	CodeFont=QString("code-font"),
	CodeFontSize=QString("code-font-size"),
	CodeTabWidth=QString("code-tab-width"),
	ColIndexes=QString("col-indexes"),
	ColIsIdentity=QString("col-is-identity"),
	CollapseMode=QString("collapse-mode"),
	Collatable=QString("collatable"),
	Collation=QString("collation"),
	Collations=QString("collations"),
	Color=QString("color"),
	Colors=QString("colors"),
	ColsComment=QString("cols-comment"),
	Column=QString("column"),
	ColumnAlias=QString("column-alias"),
	Columns=QString("columns"),
	Command=QString("command"),
	Commands=QString("commands"),
	Comment=QString("comment"),
	CommutatorOp=QString("commutator-op"),
	CompactView=QString("compact-view"),
	CompareToDatabase="compare-to-db",
	ComparisonType=QString("comparison-type"),
	CompletionTrigger=QString("completion-trigger"),
	CompositeType=QString("composite"),
	Concurrent=QString("concurrent"),
	Condition=QString("condition"),
	ConfigFile=QString("config-file"),
	Configuration=QString("configuration"),
	ConfirmValidation=QString("confirm-validation"),
	ConnectCenterPnts=QString("center-pnts"),
	ConnectFkToPk=QString("fk-to-pk"),
	Connection=QString("connection"),
	Connections=QString("connections"),
	ConnectionTimeout=QString("connection-timeout"),
	ConnectPriv=QString("connect"),
	ConnectTableEdges=QString("table-edges"),
	ConnLimit=QString("connlimit"),
	Constraint=QString("constraint"),
	Constraints=QString("constraints"),
	ConstrDefs=QString("constr-defs"),
	ConstrIndexes=QString("constr-indexes"),
	ConstrSqlDisabled=QString("constr-sql-disabled"),
	Contents=QString("contents"),
	CopyMode=QString("copy-mode"),
	CopyOptions=QString("copy-options"),
	CopyTable=QString("copy-table"),
	Create=QString("create"),
	CreateCmds=QString("create-cmds"),
	CreateDb=QString("createdb"),
	CreatePriv=QString("create"),
	CreateRole=QString("createrole"),
	CrowsFoot=QString("crows-foot"),
	CteExpression=QString("cte-exp"),
	CurIdentityType=QString("cur-identity-type"),
	CurrentModel="current-model",
	CurVersion=QString("cur-version"),
	CustomColor=QString("custom-color"),
	CustomFilter=QString("custom-filter"),
	CustomIdxs=QString("customidxs"),
	Cycle=QString("cycle"),
	Database=QString("database"),
	DataDirectory=QString("data-directory"),
	Date=QString("date"),
	DbModel=QString("dbmodel"),
	DdlEndToken=QString("-- ddl-end --"),
	DeadRowsAmount=QString("dead-rows-amount"),
	Declaration=QString("declaration"),
	DeclInTable=QString("decl-in-table"),
	Default=QString("default"),
	DefaultCollation=QString("default-collation"),
	DefaultForOps=QString("default-for-ops"),
	DefaultOwner=QString("default-owner"),
	DefaultSchema=QString("default-schema"),
	DefaultTablespace=QString("default-tablespace"),
	DefaultValue=QString("default-value"),
	Deferrable=QString("deferrable"),
	DeferType=QString("defer-type"),
	Definition=QString("definition"),
	DelAction=QString("del-action"),
	DeletePriv=QString("delete"),
	DelEvent=QString("del-event"),
	Delimiter=QString("delimiter"),
	DestType=QString("destiny-type"),
	Diff=QString("diff"),
	Dimension=QString("dimension"),
	Directory=QString("directory"),
	DisableSmoothness=QString("disable-smoothness"),
	DisplayLineNumbers=QString("display-line-numbers"),
	DockWidgets=QString("dock-widgets"),
	DomConstraint=QString("domconstraint"),
	DontDropMissingObjs="dont-drop-missing-objs",
	Drop=QString("drop"),
	DropCmds=QString("drop-cmds"),
	DropMissingColsConstrs="drop-missing-cols-constrs",
	DropTruncCascade="drop-trunc-cascade",
	DstColPattern=QString("dst-col-pattern"),
	DstColumns=QString("dst-columns"),
	DstEncoding=QString("dst-encoding"),
	DstFkPattern=QString("dst-fk-pattern"),
	DstLabel=QString("dst-label"),
	DstRequired=QString("dst-required"),
	DstTable=QString("dst-table"),
	DstType=QString("dst-type"),
	DynamicLibraryPath=QString("dynamic-library-path"),
	DynamicSharedMemory=QString("dynamic-shared-memory-type"),
	Element=QString("element"),
	Elements=QString("elements"),
	EmptyPassword=QString("empty-password"),
	Encoding=QString("encoding"),
	Encrypted=QString("encrypted"),
	EndExp=QString("end-exp"),
	Enumerations=QString("enumerations"),
	EnumType=QString("enumeration"),
	EscapeComment=QString("escape-comment"),
	Event=QString("event"),
	Events=QString("events"),
	EventType=QString("event-type"),
	ExactMatch=QString("exact-match"),
	ExcBuiltinArrays=QString("exc-builtin-arrays"),
	ExcludeElement=QString("excelement"),
	ExConstr=QString("ex-constr"),
	ExecType=QString("exec-type"),
	ExecutionCost=QString("execution-cost"),
	ExecutPriv=QString("execute"),
	ExistingValue=QString("existing-value"),
	Explicit=QString("explicit"),
	Export=QString("export"),
	ExportToFile=QString("export-to-file"),
	Expression=QString("expression"),
	Expressions=QString("expressions"),
	ExtAttribsPage=QString("ext-attribs-page"),
	ExtAttribsPerPage=QString("ext-attribs-per-page"),
	ExtObjOids=QString("ext-obj-oids"),
	Factor=QString("factor"),
	FadedOut=QString("faded-out"),
	FadeInObjects=QString("fadein-objects"),
	False=QString("false"),
	Family=QString("family"),
	FastUpdate=QString("fast-update"),
	Fdw=QString("fdw"),
	File=QString("file"),
	FileAssociated=QString("file-associated"),
	FillColor=QString("fill-color"),
	Filter=QString("filter"),
	FilterOids=QString("filter-oids"),
	FilterTableTypes=QString("filter-tab-types"),
	FinalFunc=QString("final"),
	FiringType=QString("firing-type"),
	FkColumn=QString("fk-column"),
	FkConstr=QString("fk-constr"),
	FkDefs=QString("fk-defs"),
	Font=QString("font"),
	FontSize=QString("font-size"),
	ForceObjsRecreation="force-objs-recreation",
	ForegroundColor=QString("foreground-color"),
	ForeignKeys=QString("foreign-keys"),
	ForeignTableBody=QString("foreigntable-body"),
	ForeignTableExtBody=QString("foreigntable-ext-body"),
	ForeignTableName=QString("foreigntable-name"),
	ForeignTableSchemaName=QString("foreigntable-schema-name"),
	ForeignTableTitle=QString("foreigntable-title"),
	FormatName=QString("format-name"),
	FromExp=QString("from-exp"),
	Function=QString("function"),
	FunctionType=QString("function-type"),
	GenAlterCmds=QString("gen-alter-cmds"),
	General=QString("general"),
	Global=QString("global"),
	GrantOp=QString("grant-op"),
	GridSize=QString("grid-size"),
	Group=QString("group"),
	HandlerFunc=QString("handler"),
	HandlesType=QString("handles-type"),
	HasChanges=QString("has-changes"),
	Hashes=QString("hashes"),
	HbaFile=QString("hba-file"),
	Height=QString("height"),
	HideExtAttribs=QString("hide-ext-attribs"),
	HideRelName=QString("hide-rel-name"),
	HideTableTags=QString("hide-table-tags"),
	HighlightLines=QString("highlight-lines"),
	HighlightOrder=QString("highlight-order"),
	HistoryMaxLength=QString("history-max-length"),
	Icon=QString("icon"),
	Id=QString("id"),
	IdentFile=QString("ident-file"),
	Identifier=QString("identifier"),
	IdentityType=QString("identity-type"),
	IgnoredChars=QString("ignored-chars"),
	IgnoreDuplicErrors="ignore-duplic-errors",
	IgnoreErrorCodes="ignore-error-codes",
	IgnoreImportErrors="ignore-import-errors",
	Implicit=QString("implicit"),
	Import=QString("import"),
	ImportExtObjs="import-ext-objs",
	ImportSysObjs="import-sys-objs",
	Increment=QString("increment"),
	Index=QString("index"),
	IndexElement=QString("idxelement"),
	Indexes=QString("indexes"),
	IndexType=QString("index-type"),
	Info=QString("info"),
	InhColumn=QString("inh-column"),
	InhColumns=QString("inh-columns"),
	Inherit=QString("inherit"),
	Inherited=QString("inherited"),
	InitialCond=QString("initial-cond"),
	InitialData=QString("initial-data"),
	InitialExp=QString("initial-exp"),
	InlineFunc=QString("inline"),
	InputDatabase="input-db",
	InputFunc=QString("input"),
	InsertPriv=QString("insert"),
	InsEvent=QString("ins-event"),
	InternalLength=QString("internal-length"),
	IntervalType=QString("interval-type"),
	InvertRangeSelTrigger=QString("invert-rangesel-trigger"),
	IoCast=QString("io-cast"),
	IsPartitioned=QString("is-partitioned"),
	IsTemplate=QString("is-template"),
	Italic=QString("italic"),
	JoinFunc=QString("join"),
	KeepClusterObjs="keep-cluster-objs",
	KeepObjsPerms="keep-objs-perms",
	Label=QString("label"),
	LabelsPos=QString("labels-pos"),
	Landscape=QString("landscape"),
	Language=QString("language"),
	LastAnalyze=QString("last-analyze"),
	LastAutovacuum=QString("last-autovacuum"),
	LastPosition=QString("last-position"),
	LastSysOid=QString("last-sys-oid"),
	LastVacuum=QString("last-vacuum"),
	LastValue=QString("last-value"),
	LastZoom=QString("last-zoom"),
	Layer=QString("layer"),
	Layers=QString("layers"),
	LcCollate=QString("lc-collate"),
	LcCtype=QString("lc-ctype"),
	LeakProof=QString("leakproof"),
	Left=QString("left"),
	LeftType=QString("left-type"),
	Length=QString("length"),
	Library=QString("library"),
	LikeType=QString("like-type"),
	Line=QString("line"),
	LineHighlightColor=QString("line-highlight-color"),
	LineNumbersBgColor=QString("line-numbers-bg-color"),
	LineNumbersColor=QString("line-numbers-color"),
	ListenAddresses=QString("listen-addresses"),
	Locale=QString("locale"),
	LockerArc=QString("locker-arc"),
	LockerBody=QString("locker-body"),
	Login=QString("login"),
	LookaheadChar=QString("lookahead-char"),
	LowVerbosity=QString("low-verbosity"),
	Materialized=QString("materialized"),
	MaxConnections=QString("max-connections"),
	Maximized=QString("maximized"),
	MaxObjCount=QString("max-obj-count"),
	MaxValue=QString("max-value"),
	Member=QString("member"),
	MemberRoles=QString("member-roles"),
	Merges=QString("merges"),
	Metadata=QString("metadata"),
	MinObjectOpacity=QString("min-object-opacity"),
	MinValue=QString("min-value"),
	Mode=QString("mode"),
	ModelAuthor=QString("author"),
	Name=QString("name"),
	NameLabel=QString("name-label"),
	NamePatterns=QString("name-patterns"),
	Names=QString("names"),
	NegatorOp=QString("negator-op"),
	NewIdentityType=QString("new-identity-type"),
	NewName=QString("new-name"),
	NewTableName=QString("new-table-name"),
	NewVersion=QString("new-version"),
	NnColumn=QString("nn-column"),
	NoInherit=QString("no-inherit"),
	None=QString("none"),
	NotExtObject=QString("not-ext-object"),
	NotNull=QString("not-null"),
	NullsFirst=QString("nulls-first"),
	Object=QString("object"),
	ObjectFinder=QString("objectfinder"),
	ObjectId=QString("object-id"),
	Objects=QString("objects"),
	ObjectType=QString("object-type"),
	ObjSelection=QString("obj-selection"),
	Oid=QString("oid"),
	OidFilterOp=QString("oid-filter-op"),
	Oids=QString("oids"),
	OldName=QString("old-name"),
	OldTableName=QString("old-table-name"),
	OldVersion=QString("old-version"),
	OpClass=QString("opclass"),
	OpClasses=QString("opclasses"),
	Operator=QString("operator"),
	OperatorFunc=QString("operfunc"),
	Operators=QString("operators"),
	OpFamily=QString("opfamily"),
	OpListSize=QString("op-list-size"),
	Options=QString("options"),
	OriginalPk=QString("original-pk"),
	OutputFunc=QString("output"),
	Owner=QString("owner"),
	OwnerColumn=QString("owner-col"),
	Pagination=QString("pagination"),
	PaperCustomSize=QString("paper-custom-size"),
	PaperMargin=QString("paper-margin"),
	PaperOrientation=QString("paper-orientation"),
	PaperType=QString("paper-type"),
	Parameter=QString("parameter"),
	Parameters=QString("parameters"),
	ParamIn=QString("in"),
	ParamOut=QString("out"),
	ParamVariadic=QString("variadic"),
	Parent=QString("parent"),
	Parents=QString("parents"),
	Parsable=QString("parsable"),
	PartialMatch=QString("partial-match"),
	PartitionBoundExpr=QString("partition-bound-expr"),
	PartitionedTable=QString("partitioned-table"),
	Partitioning=QString("partitioning"),
	PartitionKey=QString("partitionkey"),
	PartKeyColls=QString("part-key-colls"),
	PartKeyCols=QString("part-key-cols"),
	PartKeyExprs=QString("part-key-exprs"),
	PartKeyOpCls=QString("part-key-opcls"),
	Password=QString("password"),
	PasswordEncryption=QString("password-encryption"),
	Path=QString("path"),
	Patterns=QString("patterns"),
	Permission=QString("permission"),
	Permissive=QString("permissive"),
	PerRow=QString("per-line"),
	PgModelerVersion=QString("pgmodeler-ver"),
	PgSqlBaseType=QString("basetype"),
	PgSqlVersion=QString("pgsql-ver"),
	PkColPattern=QString("pk-col-pattern"),
	PkColumn=QString("pk-column"),
	PkConstr=QString("pk-constr"),
	PkPattern=QString("pk-pattern"),
	Placeholder=QString("placeholder"),
	Placeholders=QString("placeholders"),
	Points=QString("points"),
	Port=QString("port"),
	Portrait=QString("portrait"),
	Position=QString("position"),
	PositionInfo=QString("pos-info"),
	Precision=QString("precision"),
	Predicate=QString("predicate"),
	Preferred=QString("preferred"),
	PrependAtBod=QString("prepend-at-bod"),
	PrependedSql=QString("prepended-sql"),
	PreserveDbName="preserve-db-name",
	Preset="preset",
	PrintGrid=QString("print-grid"),
	PrintPgNum=QString("print-pg-num"),
	Privileges=QString("privileges"),
	PrivilegesGop=QString("privileges-gop"),
	ProtColumn=QString("prot-column"),
	Protected=QString("protected"),
	RangeAttribs=QString("range-attribs"),
	RangeType=QString("range"),
	Recent=QString("recent"),
	RecentModels=QString("recent-models"),
	RecreateUnmodObjs="recreate-unmod-objs",
	RectVisible=QString("rect-visible"),
	Recursive=QString("recursive"),
	RecvFunc=QString("receive"),
	ReducedForm=QString("reduced-form"),
	RefAlias=QString("ref-alias"),
	RefColumn=QString("ref-column"),
	Refer=QString("refer"),
	Reference=QString("reference"),
	ReferenceFk=QString("reference-fk"),
	References=QString("references"),
	ReferencesPriv=QString("references"),
	Referrers=QString("referrers"),
	RefName=QString("ref-name"),
	RefRoles=QString("ref-roles"),
	RefTable=QString("ref-table"),
	RefTables=QString("ref-tables"),
	RefTableTag=QString("reftable"),
	RefType=QString("ref-type"),
	RegularExp=QString("regexp"),
	Relationship=QString("relationship"),
	Relationship11=QString("rel11"),
	Relationship1n=QString("rel1n"),
	RelationshipDep=QString("reldep"),
	RelationshipFk=QString("relfk"),
	RelationshipGen=QString("relgen"),
	RelationshipNn=QString("relnn"),
	RelationshipPart=QString("relpart"),
	RelationshipTabView=QString("reltv"),
	Rename=QString("rename"),
	Replication=QString("replication"),
	RestartSeq=QString("restart-seq"),
	RestrictionFunc=QString("restriction"),
	ReturnsSetOf=QString("returns-setof"),
	ReturnTable=QString("return-table"),
	ReturnType=QString("return-type"),
	ReuseSequences=QString("reuse-sequences"),
	Revoke=QString("revoke"),
	Right=QString("right"),
	RightType=QString("right-type"),
	RlsEnabled=QString("rls-enabled"),
	RlsForced=QString("rls-forced"),
	Role=QString("role"),
	Roles=QString("roles"),
	RoleType=QString("role-type"),
	RowAmount=QString("row-amount"),
	Rules=QString("rules"),
	SaveLastPosition=QString("save-last-position"),
	SaveRestoreGeometry=QString("save-restore-geometry"),
	Schema=QString("schema"),
	SchemaOid=QString("schema-oid"),
	SearchPath=QString("search-path"),
	SecurityType=QString("security-type"),
	SelectExp=QString("select-exp"),
	SelectObjects=QString("select-objects"),
	SelectPriv=QString("select"),
	SendFunc=QString("send"),
	Sequence=QString("sequence"),
	Server=QString("server"),
	ServerEncoding=QString("server-encoding"),
	ServerPid=QString("server-pid"),
	ServerProtocol=QString("server-protocol"),
	ServerVersion=QString("server-version"),
	SetPerms=QString("set-perms"),
	SharedObj=QString("shared-obj"),
	ShellTypes=QString("shell-types"),
	ShowAttributesGrid=QString("show-attributes-grid"),
	ShowCanvasGrid=QString("show-canvas-grid"),
	ShowMainMenu=QString("show-main-menu"),
	ShowPageDelimiters=QString("show-page-delimiters"),
	ShowSourcePane=QString("show-source-pane"),
	Signature=QString("signature"),
	SimpleExp=QString("simple-exp"),
	SimplifiedObjCreation=QString("simplified-obj-creation"),
	SinglePkColumn=QString("single-pk-col"),
	Size=QString("size"),
	Snippet=QString("snippet"),
	SortOp=QString("sort-op"),
	SourceEditorApp=QString("source-editor-app"),
	SourceEditorArgs=QString("source-editor-args"),
	SourceType=QString("source-type"),
	SpatialType=QString("spatial-type"),
	SpecialPkCols=QString("special-pk-cols"),
	SqlDisabled=QString("sql-disabled"),
	SqlObject=QString("sql-object"),
	SqlTool=QString("sqltool"),
	SqlValidation=QString("sql-validation"),
	SrcColPattern=QString("src-col-pattern"),
	SrcColumns=QString("src-columns"),
	SrcEncoding=QString("src-encoding"),
	SrcFkPattern=QString("src-fk-pattern"),
	SrcLabel=QString("src-label"),
	SrcRequired=QString("src-required"),
	SrcTable=QString("src-table"),
	SrcType=QString("src-type"),
	Srid=QString("srid"),
	Ssl=QString("ssl"),
	SslCaFile=QString("ssl-ca-file"),
	SslCertFile=QString("ssl-cert-file"),
	SslCrlFile=QString("ssl-crl-file"),
	SslKeyFile=QString("ssl-key-file"),
	Start=QString("start"),
	StateType=QString("state-type"),
	Storage=QString("storage"),
	StorageParams=QString("stg-params"),
	StoreInFile="store-in-file",
	StrategyNum=QString("stg-number"),
	Style=QString("style"),
	Styles=QString("styles"),
	Subtype=QString("subtype"),
	SubtypeDiffFunc=QString("subtypediff"),
	Superuser=QString("superuser"),
	Symbol=QString("symbol"),
	Table=QString("table"),
	TableBody=QString("table-body"),
	TableExtBody=QString("table-ext-body"),
	TableName=QString("table-name"),
	TableObject=QString("table-obj"),
	TableSchemaName=QString("table-schema-name"),
	Tablespace=QString("tablespace"),
	TableTitle=QString("table-title"),
	TableType=QString("table-type"),
	Tag=QString("tag"),
	TemplateDb=QString("template"),
	TemporaryPriv=QString("temporary"),
	Top=QString("top"),
	TpmodInFunc=QString("tpmodin"),
	TpmodOutFunc=QString("tpmodout"),
	TransitionFunc=QString("transition"),
	TriggerFunc=QString("trigger-func"),
	TriggerPriv=QString("trigger"),
	Triggers=QString("triggers"),
	True=QString("true"),
	Truncate=QString("truncate"),
	TruncateCmds=QString("truncate-cmds"),
	TruncatePriv=QString("truncate"),
	TruncColsBeforeAlter="trunc-cols-before-alter",
	TruncEvent=QString("trunc-event"),
	Trusted=QString("trusted"),
	TuplesDel=QString("tuples-del"),
	TuplesIns=QString("tuples-ins"),
	Type=QString("type"),
	TypeAttribute=QString("typeattrib"),
	TypeClass=QString("type-class"),
	TypeOid=QString("type-oid"),
	Types=QString("types"),
	TyplesUpd=QString("tuples-upd"),
	UiLanguage=QString("ui-language"),
	Underline=QString("underline"),
	Unique=QString("unique"),
	Unlogged=QString("unlogged"),
	Unset=QString("unset"),
	UnsetPerms=QString("unset-perms"),
	UpdAction=QString("upd-action"),
	UpdatePriv=QString("update"),
	UpdEvent=QString("upd-event"),
	UqColumn=QString("uq-column"),
	UqConstr=QString("uq-constr"),
	UqPattern=QString("uq-pattern"),
	UsagePriv=QString("usage"),
	UseCurvedLines=QString("use-curved-lines"),
	UsePlaceholders=QString("use-placeholders"),
	UseSignature=QString("use-signature"),
	UseSorting=QString("use-sorting"),
	UseUniqueNames=QString("use-unique-names"),
	UsingExp=QString("using-exp"),
	Validation=QString("validation"),
	Validator=QString("validator"),
	ValidatorFunc=QString("validator"),
	Validity=QString("validity"),
	Value=QString("value"),
	Values=QString("values"),
	Variable=QString("variable"),
	Variation=QString("variation"),
	Version=QString("version"),
	ViewBody=QString("view-body"),
	ViewExtBody=QString("view-ext-body"),
	ViewName=QString("view-name"),
	ViewSchemaName=QString("view-schema-name"),
	ViewTitle=QString("view-title"),
	Visible=QString("visible"),
	Widget=QString("widget"),
	WidgetsGeometry=QString("widgets-geometry"),
	Width=QString("width"),
	Wildcard=QString("wildcard"),
	WindowFunc=QString("window-func"),
	WithNoData=QString("with-no-data"),
	WithoutOids=QString("without-oids"),
	WithTimezone=QString("with-timezone"),
	WordDelimiters=QString("word-delimiters"),
	WordSeparators=QString("word-separators"),
	WorkingDir=QString("working-dir"),
	XPos=QString("x"),
	YPos=QString("y");
}
