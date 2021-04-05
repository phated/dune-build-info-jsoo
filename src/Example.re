let version =
  switch (Build_info.V1.version()) {
  | None => "unknown"
  | Some(v) => Build_info.V1.Version.to_string(v)
  };

print_endline(version);
