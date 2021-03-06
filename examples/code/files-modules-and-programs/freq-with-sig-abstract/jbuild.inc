(jbuild_version 1)

(alias (
  (name runtest)
  (deps (build.errsh (files_recursively_in .)))
  (action (
    progn
    (run   cram ${<})
    (diff? ${<} ${<}.corrected)))))

(alias (
  (name runtest-all)
  (deps (build.errsh (files_recursively_in .)))
  (action (
    progn (run cram --non-deterministic ${<}) (diff? ${<} ${<}.corrected)))))

