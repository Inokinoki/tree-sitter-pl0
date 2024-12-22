// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterpl0",
    products: [
        .library(name: "TreeSitterpl0", targets: ["TreeSitterpl0"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterpl0",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterpl0Tests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterpl0",
            ],
            path: "bindings/swift/TreeSitterpl0Tests"
        )
    ],
    cLanguageStandard: .c11
)